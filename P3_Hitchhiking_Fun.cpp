#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int n, m;
vector<pii> adj[MM];
pii dist[MM]; //danger, non-danger
bool vis[MM];
int main() {
cin.sync_with_stdio(0);
cin.tie(0); 

cin>>n>>m;
memset(dist, INF, sizeof dist); memset(vis, 0, sizeof vis);

priority_queue<piii, vector<piii>, greater<piii>> pq;

for (int i=0, a, b, d; i<m; i++) {
    cin>>a>>b>>d;
    adj[a].push_back({b,d}); adj[b].push_back({a,d});
} 
dist[1].first = 0, dist[1].second = 0;
pq.push({0, {0, 1}}); //danger, nondanger, to
while(!pq.empty()) {
    piii temp = pq.top(); pq.pop();
    int u =temp.second.second;
    if (!vis[u]) {
        vis[u] = true;
        for (pii e: adj[u]) {
            int v = e.first, w = e.second;
            if (w==1) {
                if (!vis[v] && dist[u].first+1<dist[v].first) {
                    dist[v].first = dist[u].first+1;
                    dist[v].second = dist[u].second;
                    pq.push({dist[v].first, {dist[v].second, v}});
                }
            } else if (w==0) {
                if (!vis[v] && (dist[u].second+1<dist[v].second || dist[u].first<dist[v].first)) {
                    dist[v].first = dist[u].first;
                    dist[v].second = dist[u].second+1;
                    pq.push({dist[v].first, {dist[v].second, v}});

                }
            }
        }
    }
}
if (dist[n].first==INF) cout<<-1<<endl; else
cout<<dist[n].first<<" "<<dist[n].second<<endl;

return 0;
}