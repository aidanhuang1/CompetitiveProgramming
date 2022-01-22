#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 2e3+1;

int k, n, m;

int main() {
cin.sync_with_stdio(0);
cin.tie(0);
vector<piii> adj[MM];
cin>>k>>n>>m;
for (int i=0, a, b, t, h; i<m; i++) {
    cin>>a>>b>>t>>h;
    adj[a].push_back({b, {t,h}}); adj[b].push_back({a, {t,h}});
}
int a, b; cin>>a>>b;
priority_queue<piii, vector<piii>, greater<piii>> pq;
int dist[MM][201]; bool vis[MM]; //dist[node][damage] = time
memset(dist, INF, sizeof dist); memset(vis, 0, sizeof vis);

pq.push({a, {0, 0}});
dist[a][0]  = 0;
while(!pq.empty()) {
    piii temp = pq.top(); pq.pop();
    vis[temp.first]  = true;
    for (piii i: adj[temp.first]) { 
        if (k > i.second.second + temp.second.second) {
            if (temp.second.first+i.second.first<dist[i.first][temp.second.second+i.second.second]) {
                dist[i.first][temp.second.second+i.second.second] = temp.second.first+i.second.first;
                pq.push({i.first, {temp.second.first+i.second.first, temp.second.second+i.second.second}});
            }
        }
    }
}
int ans = INF;
for (int i=0; i<=k; i++) {
    ans = min(dist[b][i], ans);
}
if (ans==INF) cout<<-1<<endl;
else cout<<ans<<endl;

return 0;
}