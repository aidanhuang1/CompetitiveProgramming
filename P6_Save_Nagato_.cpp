#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
const int MM = 5e5+3;
int n, farthest, len, dist1[MM], dist2[MM];
vector<int> adj[MM];
void dfs(int cur, int prev, int dis, int d[]) {
    if (dis > len) {len=dis; farthest=cur;}  
    d[cur] = dis;
    for (int nxt: adj[cur]) {
        if (nxt!=prev) dfs(nxt, cur, dis+1, d);
    }
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>n;
for (int i=1, u, v; i<n; i++) {
    cin>>u>>v;
    adj[u].push_back(v); adj[v].push_back(u);
}
dfs(1, -1, 0, dist1); len = 0;
dfs(farthest, -1, 0, dist1); len = 0;
dfs(farthest, -1, 0, dist2); 
for(int i=1; i<=n; i++) {
    cout<<max(dist1[i],dist2[i])+1<<endl;
}
return 0;
}