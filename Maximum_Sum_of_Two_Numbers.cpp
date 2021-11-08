#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

ll n, m, max=0;
cin>>n>>m;
vector<ll> v;
for (ll i=0, a; i<n; i++) {
    cin>>a;
    v.push_back(a);
}
sort(v.begin(), v.end(), greater<ll>());
for (int i=0; i<n; i++) {
    for (int j=i+1; j<n; j++) {
         cout<<v[i]+v[j]<<endl;
        if (v[i]+v[j]<=m && i!=j) {
            cout<<v[i]+v[j]<<endl;
            return 0;
        }
    }
}
 
return 0;
}