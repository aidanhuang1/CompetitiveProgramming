#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 2e5+1;
int numbervisited[MM]; int n, k; vector<pii> adj[MM]; 
void s(int cur, int prev, int skill) {
    numbervisited[cur]++;
    priority_queue<piii, vector<piii>, greater<piii>> pq;
    for (pii next: adj[cur]) {
        if (next.first!=prev)
        pq.push({abs(next.second-skill), {next.second, next.first}});
    }
    if (!pq.empty()) {
    piii temp = pq.top();
    s(temp.second.second, cur, skill);
    }
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>k;

memset(numbervisited, 0, sizeof numbervisited);
for (int i=0, a, b, w; i<n-1; i++) {
    cin>>a>>b>>w;
    adj[a].push_back({b, w}); adj[b].push_back({a, w});
}
// numbervisited[1] = k;
for (int i=0, panda; i<k; i++) {
    cin>>panda;
    s(1, -1, panda);
}
for (int i=1; i<=n; i++) {
    cout<<numbervisited[i]<<" ";
}
// cout<<"\n";

return 0;
}