#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
int n, m, t;
vector<int> adj[1001];
void bfs(int start, int end) {
    bool vis[1001] = {false}; int dist[1001]; memset(dist, -1, sizeof dist);
    vis[start] = true; dist[start] = 0;
    queue<int> q;
    q.push(start);
    while(!q.empty()) {
        int cur = q.front(); q.pop();
        for (auto i: adj[cur]) {
            if (!vis[i]) {
                vis[i]  = true;
                dist[i] = dist[cur]+1;
                q.push(i);
                if (i==end) goto d;
            }
        }
    }
    d:
    if (vis[end]) cout<<dist[end]*t<<endl;
    else cout<<"Not enough hallways!"<<endl;
}


int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>n>>m>>t;
for (int i=0, x, y; i<m; i++) {
    cin>>x>>y;
    adj[x].push_back(y);
}
int queries; cin>>queries;
for (int i=0, x, y; i<queries; i++) {
    cin>>x>>y;
    bfs(x, y);
}

 
return 0;
}