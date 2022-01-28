#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
const int MM = 5e5+5;
int N, M, D, dis1[MM], dis2[MM]; vector<pi> adj[MM], adj2[MM];
void dijkstra(int st, int dis[], vector<pi> adj[]){
    fill(dis, dis+MM, 1e9);
    priority_queue<pi, vector<pi>, greater<pi>> q;
    dis[st] = 0; q.push({0, st});
    while(!q.empty()){
        int d = q.top().first, u = q.top().second; q.pop();
        if(d > dis[u]) continue;
        for(pi e: adj[u]){
            int v = e.first, w = e.second;
            if(dis[v] > dis[u] + w) {
                dis[v] = dis[u] + w; 
                q.push({dis[v], v});
            }
        }
    }
}
int main(){
    cin >> N >> M;
    for(int i=1, u, v, w; i<=M; i++){
        cin >> u >> v >> w;
        adj[u].push_back({v, w}); adj2[v].push_back({u, w});
    }
    dijkstra(1, dis1, adj); dijkstra(N, dis2, adj2);
    cin >> D;  int ans = dis1[N];
    for(int i=1, u, v, w; i<=D; i++){
        cin >> u >> v >> w;
        ans = min(ans, dis1[u] + w + dis2[v]);
    }
    printf("%d\n", ans==1e9? -1: ans);
}