#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int n, m; string str;
vector<int> adj[MM];

int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>n>>m;
cin>>str;
for (int i=0, x, y; i<n-1; i++) {
    cin>>x>>y;
    adj[x].push_back(y); adj[y].push_back(x);
}
for (int i=0; i<m; i++) {
    int x, y; char c;
    cin>>x>>y>>c;
    bool vis[n+1]; memset(vis, 0, sizeof vis);
    queue<int> q; q.push(x); vis[x] = true;
    bool val = false;
    while(!q.empty()) {
        int cur = q.front(); q.pop();
        for (auto nxt: adj[cur]) {
            if(!vis[nxt]) {
                vis[nxt] = true;
                if ((str[i]=='H' && c=='H') || (str[i]=='G' && c=='G')) {val = true; goto done;}
                q.push(nxt);
            }
        }
    }
    done:
    if (val) cout<<1; else cout<<0;
}
cout<<"\n";
return 0;
}