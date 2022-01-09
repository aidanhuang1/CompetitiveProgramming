#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;
struct cow {
    int x;
    int y;
};

int n, m;
cow cows[MM];
vector<int> connections[MM];
bool visited[MM];
int minx = INT_MAX, maxx = INT_MIN, maxy = INT_MIN, miny = INT_MAX;


void dfs(int u) {
    if (visited[u]) return;
    visited[u] = true;
    cow temp = cows[u];
    minx = min(minx, temp.x);
    maxx = max(maxx, temp.x);
    maxy = max(maxy, temp.y);
    miny = min(miny, temp.y);
    for (auto i: connections[u]) {
        if(!visited[i]) {
            dfs(i);
        }
    }
}

int main() {
freopen("fenceplan.in", "r", stdin);
freopen("fenceplan.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;

for (int i=1; i<=n; i++) {
    int a, b; cin>>a>>b;
    cows[i] = {a,b};
}
for (int i=1; i<=m; i++) {
    int a, b; cin>>a>>b;
    connections[a].push_back(b); connections[b].push_back(a);
}
int ans = INT_MAX;memset(visited, 0, sizeof visited);
for (int i=1; i<=n; i++) {
    if(!visited[i]) {
    dfs(i);
    ans = min(ans, ((maxx-minx)*2)+(maxy-miny)*2);
    minx = INT_MAX, maxx = INT_MIN, maxy = INT_MIN, miny = INT_MAX;
    }
}
cout<<ans<<endl;
return 0;
}