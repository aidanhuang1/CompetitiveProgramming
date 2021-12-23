#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

ll n, x; cin>>n>>x;
vector<ll> v(n+1);
for (int i=1; i<=n; i++) {
    ll a; cin>>a;
    v[i+1] = v[i]+a;
}
map<ll, int> m;
m[0] = 1;
for (auto i: v) {
    ll sum =

}
cout<<cnt<<"\n";


return 0;
}