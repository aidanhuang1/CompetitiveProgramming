#include <bits/stdc++.h> 
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

/*
We binary search for the best position, and once we are testing a position,
we run it through the loop, see if everything can be done 

Btw, we know if a friend can reach that position because time = d/s, if that needs to be taken to reach
that position is equal or less than what we need, then it is valid.
*/
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

ll n;
cin >> n;
vector<ll> start(n), speed(n);
for (int i=0; i<n; i++) {
    cin >> start[i];
}
for (int i=0; i<n; i++) {
    cin >> speed[i];
}

long double left = 0, right = 1e9, besttime = 1e9;
while(left<=right){
    long double mid = (left+right)/2; //mid is the chosen position
    long double longesttime = 0,time_l = 0, time_r = 0;
    for (int i=0; i<n; i++) {
        longesttime = abs(mid-start[i])/speed[i]; //time it takes to get to destination
        if (start[i]<mid) {
            time_l = max(time_l, longesttime); //if the friend is to the left
        } else {
            time_r = max(time_r, longesttime); //if the friend is to the right
        }
    }

// https://stackoverflow.com/questions/67030902/binary-search-when-to-use-right-mid-1-and-when-to-use-right-mid
    besttime = min(besttime, max(time_r, time_l));

//we do not use right=mid-1 nor left = mid+1; THIS IS LIKELY BECAUSE WE ARE USING NUMBER WITH MANY DECIMALS, AND USING WHOLE NUMBERS LIKE MID=LEFT+1 MAY BE TOO BIG OF A DECREASE
    
    if (time_l >time_r) {
        right = mid-0.0000000000001; //we do not use right=mid-1 nor left = mid+1;
    } else {
        left = mid+0.0000000000001;
    }
}

cout << fixed<< setprecision(12) << besttime << endl;

 
return 0;
}