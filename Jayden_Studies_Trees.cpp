#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
int n;
vector<int> adj[10001];

pair<int, int> bfs(int u) {
    int dist[10001]; 
    memset(dist, -1, sizeof(dist));dist[u]=0;
    queue<int> q;
    q.push(u);
    while(!q.empty()) {
        int cur = q.front();q.pop();
        for (auto i: adj[cur]) {
            if (dist[i]==-1) {
                dist[i] = dist[cur]+1;
                q.push(i);
            }
        }
    }
    
    int d = 0, node;
    for (int i=1; i<=n; i++) {
        if (dist[i]>=d) {
            d=dist[i];
            node = i;
        }
    }
    return make_pair(d, node);
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n; int n1;
for (int i=0, x, y; i<n-1; i++) {
    cin>>x>>y;
    n1 = x;
    adj[x].push_back(y);adj[y].push_back(x);
}
int ans1 = bfs(n1).second;
cout<<bfs(ans1).first<<endl;

return 0;
}
