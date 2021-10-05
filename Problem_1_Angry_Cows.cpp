#include <bits/stdc++.h> 
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

/*
Multiply r by 2
iterate through the cows,
if we reach a spot where we exceed 2r
then we make a new section
*/

#include <bits/stdc++.h> 
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

ll n, k;
cin >>n>>k;
vector<ll> cows(n);
for (int i=0; i<n; i++) {
    cin >> cows[i];
}

sort(cows.begin(), cows.end());
ll left = 0, right = 1e9;
while (left<=right) {
    ll mid = (left+right)/2;
    ll newmid = mid*2;
    ll prev = cows[0], sections = 1;
    for (int i=0; i<n; i++) {
        
        if (cows[i]-prev>newmid) { //we create a new section
            prev = cows[i];
            sections++;
        }
    }
    if (sections > k) { //if we have too many or just enough sections
        left = mid+1; //we do left=mid+1 because we want to increase the r, which lowers the number of sections
    } else {
        right = mid-1; //otherwise we do right=mid-1 to decrease the r, which increases the number of sections
    }
    printf("%d %d \n", left, right);
}
cout << left << endl;
 
return 0;
}
