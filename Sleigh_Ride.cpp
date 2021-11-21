#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int n, ans=0;
vector<pair<int, int>> adj[100001];
bool vis[100001]; int dist[100001];
int dfs(int cur) {
    vis[cur] = true;    
    for (auto i: adj[cur]) {
        if (!vis[i.first]) {
            dist[i.first] = dist[cur]+i.second;
            ans = max(ans, dist[i.first]);
            dist[cur]+=(dfs(i.first)+i.second);
        }
    }
    return dist[cur];
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n;
for (int i=0, a, b, c; i<n; i++) {
    cin>>a>>b>>c;
    adj[a].push_back({b, c}); adj[b].push_back({a, c});
}
memset(vis, false, sizeof vis); memset(dist, -1, sizeof dist);
dist[0] = 0;
dfs(0);
cout<<ans<<endl;
return 0;
}