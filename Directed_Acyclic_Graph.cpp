#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
int n; 
int adj[1001][1001];
int vis[1001]; bool cycle = false;
void dfs(int cur)  {
    vis[cur] = 1;
    for (int i=0; i<n; i++) {
        if (adj[cur][i]==1 && vis[i]==1)  {
            cycle = true;
            return;
        } else if (adj[cur][i]==1 && vis[i]==0) {
            dfs(i);
        }
    }
    vis[cur] = 2;
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n;
for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
        cin>>adj[i][j];
    }
}
for (int i=0; i<n && !cycle; i++) {
    memset(vis, 0, sizeof(vis));
    dfs(i);
}
cout<<(cycle ? "NO":"YES")<<endl;
return 0;
}