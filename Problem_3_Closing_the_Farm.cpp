#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 3001;

int n, m, nodes =0;
vector<int> adj[MM];
bool closed[MM], visited[MM];
void dfs(int node) {
    if (closed[node] || visited[node]) return;
    visited[node] = true;
    nodes++;
    for (auto i: adj[node]) {
        dfs(i);
    }
}

int main() {
freopen("closing.in","r" , stdin);
freopen("closing.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for (int i=0; i<m; i++) {
    int a, b; cin>>a>>b;
    adj[a].push_back(b); adj[b].push_back(a);
}

vector<int> order(n);
for (int i=0; i<n; i++) {
    cin>>order[i];
}
memset(closed, 0, sizeof closed); memset(visited, 0, sizeof visited);
dfs(1);
if (nodes==n) cout<<"YES"<<endl;
else cout<<"NO"<<endl;


for (int i=0; i<n-1; i++) {
    memset(visited, 0, sizeof visited);
    nodes = 0;
    closed[order[i]] = true;
    dfs(order[n-1]);
    if (nodes==n-1-i) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}





return 0;
}