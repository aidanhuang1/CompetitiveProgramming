#include <bits/stdc++.h> 
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;


ll n,k;
vector<vector<ll>> adj; 
vector<ll> visited;
set<ll> nodeset;
vector<vector<ll>> parent;
set<pair<ll,ll>> endP;
void dfs(ll u) {
    visited[u] = 1;
	for (ll v : adj[u])
	{
		if (visited[v] == 0) {
			parent[v].push_back(u);
			dfs(v); 
        }
		else if (visited[v] == 1)
		{
			endP.insert({v, u});
		}
	}

	visited[u] = 2;
}


void dfsutil(ll u, ll end) {
    nodeset.insert(u);
    if (u==end) return;
    for (ll v: parent[u]) {
        dfsutil(v, end);
    }
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>k;
adj.resize(n + 1);
visited.assign(n + 1, 0);
parent.resize(n + 1);
for (ll i=0; i<k; i++) {
    ll a, b, a_s, b_s; cin >>a>>b>>a_s>>b_s;
    (a_s>b_s) ? adj[a].push_back(b):adj[b].push_back(a);
}


for (ll i=1; i<=n; i++) {
    if (visited[i]==0) {
        dfs(i);
        for (pair<ll, ll> j: endP) {
            dfsutil(j.second, j.first);
        }
    }
}
cout << nodeset.size() << endl;

return 0;
}