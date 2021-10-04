#include <bits/stdc++.h> 
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
 
ll n, t;
cin >>n>>t;
vector<ll> machines(n);
for (ll i=0; i<n; i++) {
    cin >> machines[i];
}


//We use binary search to look for the time, then we solve for how many products we can produce
//with that time given
//if we cannot make enough, we make left=mid+1
//we we can make enough, we make right=mid-1

ll left = 0, right = 1e18, answer = 1e18;
while (left <= right) {
    ll mid = (left+right)/2;
    ll productsmade = 0;
    for (ll i=0; i<n; i++) {
        productsmade+=(mid/machines[i]);
    }
    if (productsmade<t) { //if mid (time) does not produce enough products
        left = mid+1;
    } else {
        answer = min(answer, mid);
        right = mid-1;
    }
}
cout << answer << endl;
return 0;
}