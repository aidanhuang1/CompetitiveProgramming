#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
freopen("div7.in", "r", stdin);
freopen("div7.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

ll n; cin>>n;
vector<ll> v(n);vector<ll> psum(n+1);
for (int i=0; i<n; i++) {
    cin>>v[i];
    psum[i+1] = (psum[i]+v[i])%7;
}
    
int ans = 0;
int vis[n+1];
memset(vis, -1, sizeof vis);
for (int i=0; i<=n; i++) {
    if (vis[psum[i]]==-1) {
        vis[psum[i]]=i;
        
        
    } else {
        ans = max(ans, i-vis[psum[i]]);
    }
}
cout<<ans<<"\n";
return 0;
}