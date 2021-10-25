#include <bits/stdc++.h> 
#include <iostream>
#define pb push_back
#define mp make_pair
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

ll n, m;
cin>>n>>m;
vector<ll> cities, towers;
for (int i=0; i<n; i++) {
    ll x;
    cin>>x;
    cities.push_back(x);
}
for (int i=0; i<m; i++) {
    ll x;
    cin>>x;
    towers.push_back(x);
}

ll left = 0, right = 1e9, bestans = 1e9;
while(left<=right) {
    ll mid = (left+right)/2;

    bool valid = true;
    for (auto i: cities) {
        ll temp = 1e9;
        for (auto j: towers) {
            temp = min(temp, abs(i-j));
        }
        if (temp>mid) { //we need to increase distance left=mid+1
            valid = false;
        }
    }
    if (!valid) {
        left = mid+1;
    } else {
        bestans = min(bestans, mid);
        right = mid-1;
    }
}
cout << bestans << endl;
 
return 0;
}