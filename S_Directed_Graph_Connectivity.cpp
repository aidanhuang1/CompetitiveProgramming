#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 51;

int n, m;
bool adj[MM][MM];

int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>n>>m;
vector<pii> v(m); bool vis[MM];

memset(adj, 0, sizeof adj); memset(vis, 0, sizeof vis);
for (int i=0; i<m; i++) {
    int s, t; cin>>s>>t;
    adj[s][t] = 1;
    v[i]={s,t};
}

for (int i=0; i<m; i++) {
    memset(vis, 0, sizeof vis);
    pii cur = v[i];
    adj[cur.first][cur.second] = 0;
    queue<int> q;
    q.push(1);
    while(!q.empty()) {
        int c = q.front(); q.pop();
        vis[c]= true;
        for (int i=1; i<=n; i++) {
            if (adj[c][i] && !vis[i]) {
                vis[i] = true;
                q.push(i);
            }
        }
    }
    cout<< (vis[n] ? "YES" : "NO")<<endl;
    adj[cur.first][cur.second]= 1;
}

return 0;
}