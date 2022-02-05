#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 302;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, m, t;
cin>>n>>m>>t;
int dist[MM][MM];
memset(dist, INF, sizeof dist);
for (int i=1; i<=n; i++) {
    dist[i][i] = 0;
}
for (int i=0,s,e,h; i<m; i++) {
    cin>>s>>e>>h;
    dist[s][e] = h;
}
for (int k = 1; k <= n; k++) {
        for (int u = 1; u <= n; u++) {
            for (int v = 1; v <= n; v++) {
                    dist[u][v] = min(dist[u][v], max(dist[u][k], dist[k][v]));
                
            }
        }
    }
for (int i=0, a, b; i<t; i++) {
    cin>>a>>b;
    if (dist[a][b]==INF) cout<<-1<<endl; else cout<<dist[a][b]<<endl;
}



return 0;
}