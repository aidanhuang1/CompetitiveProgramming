#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int vis[101], c=0;
void dfs(int u, vector<int> *adj) {
    vis[u] = 1;
    for (int v: adj[u]) {   
        if (vis[v]==1) {
            for(auto i: vis) {
                if (i==1) c++;
            }
            return;
        }
        else if (vis[v]==0) {
            dfs(v, adj);
        }
    } vis[u] = 2;
   
}
int query() {
    c=0;
    vector<int> adj[101];
    memset(vis, 0, sizeof(vis));
    int q;cin>>q;
    for (int x, y; q>0; q--){  
        cin>>x>>y;
        adj[x].push_back(y);
    }
    dfs(1, adj);
    return c;
}
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

for (int i=0; i<5; i++) {
    cout<<query()<<endl;
}
 
return 0;
}