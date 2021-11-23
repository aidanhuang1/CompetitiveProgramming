#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
int n, m;
vector<int> adj[10001]; int ind[10001];
queue<int> q; int cnt;
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>n>>m;
memset(ind, 0, sizeof ind);
for (int i=0, a, b; i<m; i++) {
    cin>>a>>b;
    adj[a].push_back(b);
    ind[b]++;
}

for (int i=1; i<=n; i++) {
    if (ind[i]==0) q.push(i);
}
while(!q.empty()) {
    int cur = q.front(); q.pop(); cnt++;
    for (auto i: adj[cur]) {
        --ind[i];
        if (ind[i]==0) {
            q.push(i);
        }
    }
}
if (cnt==n) cout<<"Y"<<endl;
else cout<<"N"<<endl;
return 0;
}