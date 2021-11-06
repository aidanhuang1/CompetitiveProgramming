#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

vector<int> adj[30001]; bool vis[30001]; int dist[30001]; 

void bfs(int cur) {
    queue<int> q;
    q.push(cur);
    while(!q.empty()) {
        int u = q.front();
        q.pop(); 
        for (int i: adj[u]) {
            if (dist[i]>dist[u]+1) {
                q.push(i);
                dist[i] = min(dist[i], dist[u]+1);
            }
        }
    }
    
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);
 
int n, m, k;
cin>>n>>m;
for (int i=0, a, b; i<m; i++) {
    cin>>a>>b;
    adj[a].push_back(b); adj[b].push_back(a);
}
cin>>k; queue<int> q; 
memset(vis, 0, sizeof(vis));
memset(dist, 1e4, sizeof(dist));

for (int i=0, x; i<k; i++) {
    cin>>x;
    vis[x] = true; dist[x]=0; q.push(x);
}
while(!q.empty()) {
    bfs(q.front());
    q.pop();
}
int maxtime=0;
for (int i=1; i<=n; i++) {
    maxtime=max(maxtime, dist[i]);
}
cout<<maxtime<<endl;

return 0;
}