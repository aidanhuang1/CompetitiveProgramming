#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
vector<vector<ll>> adj;
vector<ll> dist;ll n;
ll highest = 0, ind = 0;
void dfs(ll start, ll prev) {
    for (ll i: adj[start]) {
        if (i != prev) {
            dist[i] = dist[start]+1;
            dfs(i, start);
        }
    }
}

void find() {
    for (int i=0; i<n+1; i++) {
        if (dist[i]>highest) {
            highest = dist[i];
            ind=i;
        }
    }
    

}
int main() {
cin.sync_with_stdio(0);
cin.tie(0);


cin>>n;
adj.resize(n+1); dist.resize(n+1);
for (int i=0; i<n-1; i++) {
    ll from, to;
    cin >> from >> to;
    adj[from].push_back(to);
    adj[to].push_back(from);
}
dfs(1, 0);

find();
dist.clear();
dist.resize(n+1);

dfs(ind, 0);
find();
cout << highest << endl;
 
return 0;
}
