#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;
int n, w, d;
vector<int> adj1[MM], adj2[MM]; //adj1 is from 1 to N, adj2 is from N to 1
vector<int> stations;


int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>n>>w>>d;
for (int i=0, a, b; i<w; i++) {
    cin>>a>>b;
    adj1[a].push_back(b); adj2[b].push_back(a);
}
for (int i=0, x; i<n; i++) {   
    cin>>x; stations.push_back(x);
}
for (int i=0, x, y; i<d; i++) {
    cin>>x>>y;
}

vector<int> adj1dist(n, INF), adj2dist(n, INF);
bool adj1vis[n], adj2vis[n]; memset(adj1vis, 0, sizeof adj1vis); memset(adj2vis, 0, sizeof adj2vis);

queue<int> qadj1; qadj1

return 0;
}