#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

vector<vector<ll>> adj;
bool visited[10001];
ll dist[10001], parent[10001];
bool bfs(ll start, ll end) {
    visited[start] = true;
    bool found = false;
    queue<ll> q;
    q.push(start);
    dist[start] = 0;   
    while(!q.empty()) {
        ll temp = q.front();   
        if (temp==end) {
            found = true;
        }
        q.pop();
        for (ll i: adj[temp]) {
            
            if (!visited[i]) {
                q.push(i);
                dist[i] = min(dist[i], dist[temp]+1);
                parent[i] = temp;
            }
        }
    }
    return found;
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

ll n, m;
cin >> n >> m;
adj.resize(n+1);
for (int i=0; i<n; i++) {
    ll a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
}
 set<ll> listset;
if (bfs(1,n)) {
    cout <<dist[n] <<endl;
    
} else {
    cout << "IMPOSSIBLE" << endl;
    int node = n;
   
    listset.insert(node);
    while(true) {
        node=parent[node];
        listset.insert(node);
        if (node==1) break;
    }
}
for (ll number: listset) {
    cout << number <<" ";
}

return 0;
}