#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

vector<vector<ll>> adj;
bool visited[10001];
int bfs(ll start) {
    visited[start] = true;
    
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
 
return 0;
}