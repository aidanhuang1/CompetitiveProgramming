#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 5e3+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, t; cin>>n>>t;
vector<pii> adj[MM];
bool vis[MM]; int dist[MM], cost[MM];
memset(vis, 0, sizeof vis); memset(dist, INF, sizeof dist); memset(cost, INF, sizeof cost);

for (int i=0, x, y, w; i<t; i++) {
    cin>>x>>y>>w;
    adj[x].push_back({y,w}); adj[y].push_back({x,w});
}
int k; cin>>k;
for (int i=0, z, Pz; i<k; i++) {
    cin>>z>>Pz;
    cost[z] = Pz;
}
int d; cin>>d;
priority_queue<pii, vector<pii>, greater<pii>> pq;
dist[d] = 0;
pq.push({0, d});
while(!pq.empty()) {
    pii x = pq.top(); pq.pop(); 
    if (!vis[x.second]) {
        vis[x.second] = true;
        for (pii i: adj[x.second]) {
            if (!vis[i.first] && dist[i.first] > dist[x.second]+i.second) {
                dist[i.first] = dist[x.second]+i.second;
                pq.push({dist[x.second]+i.second, i.first});
            }
        }
    }
}
int ans = INF;
for (int i=1; i<=n; i++) {
    ans = min(ans, dist[i]+cost[i]);
}
cout<<ans<<endl;

return 0;
}