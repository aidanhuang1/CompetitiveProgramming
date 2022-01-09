#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 2e5+1;

int n; 
vector<int> adj[MM];
int vis[MM], d[MM], ans=INT_MAX;

void dfs(int u) {
    vis[u] = 1;
    for (auto i: adj[u]) {
        if (vis[i]==1) {
            ans = min(ans, d[u]-d[i]+1);
            return;
        } else if (vis[i]==0) {
            d[i]=d[u]+1;
            dfs(i); 
        }
    }
    vis[u] = 2;
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n;for (int i=1; i<=n; i++) {
    int a; cin>>a;
    adj[i].push_back(a);
}
memset(vis, 0, sizeof vis); memset(d, 0, sizeof d);
for (int i=1; i<=n; i++) {
    if (vis[i]==0) dfs(i);
}
cout<<ans<<endl;


return 0;
}