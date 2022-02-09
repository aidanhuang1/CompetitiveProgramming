#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 71;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);


int n, m; cin>>n>>m;
bool vis[MM]; ll dist[MM][]; //dist[node id][number of routes]
ll adj[MM][MM]; memset(adj, INF, sizeof adj);
for (int i=0; i<m; i++) {
    int a, b, t; cin>>a>>b>>t;
    adj[a][b] = adj[b][a] = t;
}
int k, q; cin>>k>>q;
for (int i=0; i<q; i++) {
    int a, b; cin>>a>>b;
    memset(vis, 0, sizeof vis); memset(dist, INF, sizeof dist);
    dist[a][0] = 0;
    for (int i=1; i<=n; i++) {
        int u = 0;
        for (int j=1; j<=n; j++) {
            if (!vis[j] && dist[j] < dist[u]) {
                u = j;
            }
        }
        vis[u] = true;
        for (int v = 1; v<=n; v++) {
            int w = adj[u][v];
            if (!vis[v] && dist[u] + w < dist[v]) {
                dist[v] = dist[u]+w;
            }
        }
    }
    cout<<dist[b]<<endl;
}

return 0;
}