#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e3+1;
int n, m, q, cnt = 0;
vector<pii> adj[MM];
map<string, int> index_map;
int stringindex(string x) {
    if (index_map.count(x)==0) {
        index_map[x] = cnt++;
    }
    return index_map[x];
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>n>>m;
for (int i=0; i<m; i++)  {
    string a, b; ll w;
    cin>>a>>b>>w;
    adj[stringindex(a)].push_back({w, stringindex(b)});
}
cin>>q;
ll dist[MM]; bool vis[MM];
for (int i=0; i<q; i++) {
    string x, y; cin>>x>>y;
    int a = stringindex(x), b = stringindex(y);
    memset(dist, INF, sizeof dist); memset(vis, 0, sizeof vis);
    dist[a] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({dist[a], a}); //time, to
    while(!pq.empty()) {
        pii temp = pq.top(); pq.pop();
        int t = temp.first, u = temp.second;
        if (vis[u]) continue;
        vis[u] = true;
        for (pii i: adj[u]) {
            int to = i.second, time = i.first;
            if (dist[to]>dist[u]+time) {
                dist[to] = dist[u]+time;
                pq.push({dist[to], to});
            }
        }
    }
    if (!vis[b]) cout<<"Roger"<<endl; else cout<<dist[b]<<endl;
}



return 0;
}