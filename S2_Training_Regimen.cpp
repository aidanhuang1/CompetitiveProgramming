#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 2e5+1;
int trainingtime[MM];
vector<pii> adj[MM];
//always look for the minimum level to reach another node
//and keep training until maxlevel player level reaches maxlevel
int maxlevel =0, playerlevel = 1, mintrainingtime = INF, totaltrainingtime = 0;

int main() {
cin.sync_with_stdio(0);
cin.tie(0);
int n, m; cin>>n>>m;
for (int i=1; i<=n; i++) {
    cin>>trainingtime[i];
}
for (int i=0; i<m; i++) {
    int a, b, w; cin>>a>>b>>w;
    maxlevel = max(maxlevel, w);
    adj[a].push_back({b, w}); adj[b].push_back({a, w}); //to, level
}

int dist[MM]; memset(dist, INF, sizeof dist); dist[1] = 0; //
bool vis[MM]; memset(vis, 0, sizeof vis);
priority_queue<pii, vector<pii>, greater<pii>> pq;
pq.push({0, 1}); //minimum rank level, node id

mintrainingtime = min(mintrainingtime, trainingtime[1]);
while(!pq.empty() && playerlevel<=10) {
    pii temp = pq.top(); //temp is the node that we want to go to with the smallest rank requirement
    if (vis[temp.second]) continue;
    if (playerlevel>=temp.first) {
        int u = temp.second;        
        vis[u] = true;
        dist[u] = totaltrainingtime;
        mintrainingtime = min(mintrainingtime, trainingtime[u]);
        for (pii i: adj[u]) {
            if (!vis[i.first]) {
                pq.push({i.second, i.first});
            }
        }
        pq.pop();
        return 0;
    }
    else {
        playerlevel++;
        totaltrainingtime+=mintrainingtime;
    }
}
return 0;
}