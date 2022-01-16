#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, m; cin>>n>>m;
vector<pair<ll, ll>> points; vector<pair<ll, ll>> kd;
for (int i=0; i<n; i++) {
    ll x, y; cin>>x>>y;
    points.push_back({x, y});
}
for (int i=0; i<m; i++) {
    ll k, d; cin>>k>>d;
    kd.push_back({k, d});
}
map<ll, ll> mp;
for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
        ll temp = (kd[j].first*points[i].first)-(kd[j].second*points[i].second);
        cout<<temp<<endl;
        mp[temp]++;
    }
}
for (auto i: mp) {
    // cout<<(i.second*(i.second-1))/2<<endl;
    // cout<<i.first<<" "<<i.second<<endl;
    
}

return 0;
}