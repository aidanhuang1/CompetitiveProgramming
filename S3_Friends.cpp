#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

vector<int> adj[10000];

void bfs(int start, int end) {
    int dist[10000]; bool vis[10000]; memset(dist, 0, sizeof(dist)); memset(vis, false, sizeof(vis));
    queue<int> q;
    q.push(start);
    while(!q.empty()) {
        int u = q.front(); q.pop();
        vis[u] = true;
        for (int i: adj[u]) {
            if (!vis[i]) {
                dist[i] = dist[u]+1;
                q.push(i);
            }
        }
    }
    if (vis[end]) {
        cout<<"Yes "<<dist[end]-1<<endl;
    } else {
        cout<<"No"<<endl;
    }
    return;
}

 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
for (int i=0, a, b; i<n; i++) {
    cin>>a>>b;
    adj[a].push_back(b);
}
int x, y;
while(true) {
    cin>>x>>y;
    if(x==0 && y==0) break;
    bfs(x,y);

}

return 0;
}