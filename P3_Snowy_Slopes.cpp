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
vector<pair<ll, ll>> points; vector<long double> slope;
for (int i=0; i<n; i++) {
    ll x, y; cin>>x>>y;
    points.push_back({x, y});
}
for (int i=0; i<m; i++) {
    ll k, d; cin>>k>>d;
    slope.push_back(k*1.0/d);
}
unordered_set<long double> pointintercepted[n];
for (int i=0; i<n; i++) {
    for (int j=i+1; j<n; j++) {
        long double gradient = (points[j].second-points[i].second)*1.0/(points[j].first-points[i].first);
        for (auto s: slope) {
            if (s==gradient) {
                if (pointintercepted[i].size()==0 && pointintercepted[j].size()==0) {

                }
            }
        }
        
    }
}

return 0;
}