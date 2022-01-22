#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 2e3+1;

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int t, n, m, g; cin>>t>>n>>m>>g;
bool foodbasics[MM]; memset(foodbasics, 0, sizeof foodbasics);
int dist[MM]; memset(dist, INF, sizeof dist);
bool vis[MM]; memset(vis, 0, sizeof vis);
vector<pii> adj[MM];
for (int i=0, x; i<g; i++) {
    cin>>x; foodbasics[x] = true;
}
for (int i=0, a, b, w; i<m; i++) {
    cin>>a>>b>>w;
    adj[a].push_back({b,w});
}
priority_queue<int, vector<int>, greater<int>> pq;
dist[0] = 0;
pq.push(0);
while(!pq.empty()) {
    int u = pq.top(); pq.pop();
    if (!vis[u]) {
        vis[u] = true;
        for (pii next: adj[u]) {
            int v  = next.first, w = next.second;
            if (!vis[v] && dist[v] > w+dist[u]) {
                dist[v] = w+dist[u];
                pq.push(v);
            }
        }
    }
}
int ans = 0;
for(int i=1; i<=n; i++) {
    if (dist[i]<t && foodbasics[i]) ans++;
}
cout<<ans<<endl;

return 0;
}