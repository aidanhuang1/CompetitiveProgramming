#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
vector<int> adj[51]; int n, m;  
vector<pair<int, int>> query;
bool vis[51];

void dfs(int x, int y, int cur) {
    vis[cur] = true;
    if (cur==n) {
        return;
    }
    for (auto i: adj[cur]) {
        if (!vis[i]) {
            if (cur==x && i==y) continue;
            dfs(x, y, i);
        }
    }
    return;
}
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>n>>m;
for (int i=0, x, y; i<n; i++) {
    cin>>x>>y;
    query.push_back({x,y});
    adj[x].push_back(y);
}
for (auto i: query) {
    memset(vis, 0, sizeof (vis));
    dfs(i.first, i.second, 1);
    cout<< (vis[n] ? "YES" : "NO" )<<endl;
}


return 0;
}