#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;
int n,m;
bool visited[MM];vector<int> adj[MM];
void dfs(int u) {
    visited[u] = true;
    for (auto i: adj[u]) {
        if(!visited[i]) {
            dfs(i);
        }
    }
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;

for (int i=0; i<m; i++) {
    int a, b; cin>>a>>b;
    a--; b--;
    adj[a].push_back(b);
}

memset(visited, 0, sizeof visited);
dfs(0);
for (int i=0; i<n; i++) {
    if (!visited[i]) {
        cout<<"NO\n"<<1<<" "<<i+1<<endl;
        return 0;
    }
}
memset(visited, 0, sizeof visited);
dfs(i);
for (int i=1; i<n; i++) {
    
    if (!visited[0]) {
        cout<<"NO\n"<<i+1<<" "<<1<<endl;
        return 0;
    }
}
cout<<"YES"<<endl;




return 0;
}