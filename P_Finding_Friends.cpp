#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e3+1;

int n, q;
int adj[MM][MM];
bool vis[MM];
int dist[MM];
void search(int current, int end) {
    queue<int> q; 
    q.push(current);
    dist[current] = 0;
    while(!q.empty()) {
        int cur = q.front(); q.pop();
        vis[cur] = true;
        for (int i=1; i<=n; i++) { 
            int to = adj[cur][i];
            if (to==1 && !vis[i]) {
                vis[i] = true;
                dist[i] = dist[cur]+1;
                q.push(i);
            }
        }

    }
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>q;
memset(adj, 0, sizeof adj);
for (int i=1; i<n; i++) {
    int a, b; cin>>a>>b;
    adj[a][b] = adj[b][a] = 1;
}
for (int i=0; i<q; i++) {
    int type, u, v; cin>>type>>u>>v;
    if (type==1) {
        memset(vis, 0, sizeof vis); memset(dist, INF, sizeof dist);
        
        search(u, v);
        if (dist[v]==INF) cout<<-1<<endl; else
        cout<<dist[v]<<endl;
    }
    else {
        adj[u][v] = adj[v][u] = 0;
    }
}


return 0;
}