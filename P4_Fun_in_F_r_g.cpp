#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, m; cin>>n>>m;
vector<piii> adj[MM];
for (ll i=0, a, b, c; i<m; i++) {
    cin>>a>>b>>c;
    adj[a].push_back({b, {c, i}}); adj[b].push_back({a, {c, i}}); // to, time, level
}

ll a, b, c; cin>>a>>b>>c;
priority_queue<piii, vector<piii>, greater<piii>> pq; 
ll dist[MM][200001]; bool vis[MM]; //dist[node][level] = time
memset(dist, INF, sizeof dist); memset(vis, 0, sizeof vis);


return 0;
}