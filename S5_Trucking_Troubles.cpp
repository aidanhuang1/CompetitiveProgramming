#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;
struct edge {
    int to;
    int weight;
};
class compare{
    public:
    int operator() (const edge t, const edge w) {
        return t.weight>w.weight;
    }
};
int c, r, d;
vector<edge> adj[MM];
vector<int> dest;
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>c>>r>>d;
for (int i=0, x, y, w; i<r; i++) {
    cin>>x>>y>>w;
    adj[x].push_back({y,w});adj[y].push_back({x,w});
}
for (int i=0; i<d; i++) {
    cin>>dest[i];
}
bool vis[MM]; int e[MM];
memset(vis, false, sizeof vis); memset(e, -1, sizeof e);
priority_queue<edge, vector<edge>, compare> pq; //priority queue with max heap (largest at front), cause we want to find bridges with maximum capacity 
vis[1] = true;
for (auto i: adj[1]) {
    pq.push({i.to, i.weight});  
    e[i.to] = i.weight;
    vis[i.to] = true;
}
while(!pq.empty()) {
    edge cur = pq.top(); pq.pop();
    for (auto i: adj[cur.to]) {
        if (!vis[i.to]) {
            pq.push({i.to, i.weight});
            e[i.to] = i.weight;
            vis[i.to] = true;
        }
    }
}
int ans = 100001;
for (auto i: dest) {
    ans = min(e[i], ans);
}
cout<<ans<<"\n";



return 0;
}