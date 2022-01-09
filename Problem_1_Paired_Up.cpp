#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
freopen("pairup.in", "r", stdin);
freopen("pairup.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n; 
ll m=0;
vector<pair<ll, ll>> v;
for (int i=0; i<n; i++) {
    ll a, b;
    cin>>a>>b;
    v.push_back({b, a});
    m+=a;
}
sort(v.begin(), v.end());
ll ans = 0;
ll p1 = 0, p2 = v.size()-1, cntp1 = 0, cntp2 = 0;
while(p1<=p2) {
    if (v[p1].second<=0) p1++;
    if (v[p2].second<=0) p2--;
    ans = max(ans, v[p1].first+v[p2].first);
    v[p1].second--;
    v[p2].second--;
    cntp1++; cntp2++;
}
cout<<ans<<"\n";
return 0;
}