#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

/*
We will be converting to a difference array and using that

CASE 1:
[0, -3, -1, -1, -3] 
[0, -2, 0, 0, -2] 1 move
[0, 0, 0, 0, -2] 2 moves
[0, 0, 0, 0, 0] 2 moves
look at the indices on the sides (they should not have values of 0)
find the minimum absolute value of both numbers (the leftmost and the rightmost)
add or subtract the entire range by that minimum absolute value number of times
and then once we are done, we go back to marking those two leftmost rightmost pointers and redo the difference array
and we do what we did earlier...

CASE 2:
[-3, -3, -1, -1, -2]
[-2, -2, 0, 0, -1]
[0, -2, 0, 0, -1] 1 move
[0, 0, 0, 0, -1] 2moves
[0, 0, 0, 0, 0] 1move

look at the indexes on the sides,
take the minimum absolute value of both numbers (2)
add or subtract that entire range by that minimum absolute value number of times
becomes :[0, -1, 1, 1, 0]
we adjust our leftmost rightmost pointers
the minimum absolute is 1, but we can choose to raise the range by 1 or decrease by 1 (it doesn't matter which one is first)
becomes: [0, 0, 2, 2, 0]
becomes: [0, 0, 0, 0, 0]



for example [0, 2, -2, 3, -1] 
[0, 0, -2, 3, -1] 2moves
[0, 0, 0, 3, -1] 2 moves
[0, 0, 0, 0, -1]3 moves
[0, 0, 0, 0, 0] 1 moves
= 8total moves


FINAL CONCLUSION:
Start from the left and iterate through the difference array until you hit the first non-zero number.
If it is positive, keep iterating and stop when you hit a negative number. In that range, take the minimum value and 
that is what you will be subtracting by in that range. 
And if it negative, keep iterating and stop when you hit a positive number. 



*/

int main() {
//freopen(, , stdin);
//freopen(, , stdout);
cin.sync_with_stdio(0);
cin.tie(0);

ll n; cin>>n;
vector<ll> t1(n), diff(n);
for (ll i=0; i<n; i++) {
    cin>>t1[i];
}
for (ll i=0, x; i<n; i++) {
    cin>>x;
    diff[i] = t1[i]-x;
}
//good up to here


ll cnt=0;
while(true){
    bool done = true;
    int posorneg = 0; //0 = negative, 1 = positive
    ll p1=0;    
    for (int i=0; i<n; i++) {
        if (diff[i]!=0) {//found the first point
            done = false;
            p1 = i;
            if (diff[i]>0) posorneg = 1;
            else if (diff[i]<0) posorneg = 0;
            break;
        }
    }
    //good up to here



    if (done) { //if everything in the array is 0
        cout<<cnt<<"\n";
        return 0;
    }


    // for (auto i:diff) cout<<i<<" ";
    // cout<<endl;


    ll p2 = n-1;
    ll minabs = abs(diff[p1]);
    for (int i=p1+1; i<n; i++) { //good up to here
        if ((posorneg==1 && diff[i]<=0) || (posorneg==0 && diff[i]>=0)) {
            p2=i-1;
            break;
        }
        minabs = min(minabs, abs(diff[i]));
    }
    // cout<<p1<<" "<<p2<<endl;
    //you now have the range p1 to p2
    for (int i=0; i<minabs; i++) {
        for (int j=p1; j<=p2; j++) {
            if (posorneg==1) diff[j]--;
            else if (posorneg==0) diff[j]++;
        }
    }
    cnt+=minabs;

}

return 0;
}