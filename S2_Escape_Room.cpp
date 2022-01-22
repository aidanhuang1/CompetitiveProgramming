#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e6+1;
vector<pair<int, int>> adj[MM];
bool vis[1001][1001];

void d(pair<int ,int> temp) {
    vis[temp.first][temp.second] = true;
    if (temp.first==0 && temp.second==0) {
        cout<<"yes"<<endl;
        exit(0);
    }
    for (auto i: adj[(temp.first+1)*(temp.second+1)]) {
        if (!vis[i.first][i.second])
        d({i.first, i.second});
    }
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int m, n; cin>>m>>n;
memset(vis, 0, sizeof vis);
for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
        int x; cin>>x;
        adj[x].push_back({i,j});
    }
}

d({m-1, n-1});
cout<<"no"<<endl;

return 0;
}