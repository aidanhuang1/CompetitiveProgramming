#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 2e3+1;

int n, m, b, q;
vector<pair<int, int>> adj[MM];
bool vis[MM];
int dist[MM];

int dijk(int start, int end) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[start] = 0;
    pq.push({dist[start], start});
    while(!pq.empty()) {
        pii cur = pq.top(); pq.pop();
        int u = cur.second;
        if(!vis[u]) {
            vis[u] = true;
            for (pii e: adj[u]) {
                int v = e.first, w = e.second;
                if (!vis[v] && dist[u]+w<dist[v]) {
                    dist[v]=dist[u]+w;
                    pq.push({dist[v], v});
                }
            }
        }
    }
    if (dist[end]==INF) return -1;
    return dist[end];
}


int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>m>>b>>q;
for (int i=0, x, y, z; i<m; i++) {
    cin>>x>>y>>z;
    adj[x].push_back({y,z});  adj[y].push_back({x,z});
}
for (int i=0, a; i<q; i++) {
    cin>>a;
    memset(vis, 0, sizeof vis); memset(dist, INF, sizeof dist);
    cout<<dijk(a,b)<<"\n";
}


return 0;
}