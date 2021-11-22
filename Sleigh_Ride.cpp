#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int n, ans=0, sum=0;
vector<pair<int, int>> adj[100001];
int dist[100001];
void b(int cur) {
    int mx = 0;
    queue<int> q;
    q.push(0);
    while(!q.empty()) {
        int x = q.front(); q.pop();
        mx = max(mx, dist[x]);
        for (auto i: adj[x]) {
            if (dist[i.first]==-1)  {
                q.push(i.first);
                dist[i.first] = dist[x]+i.second;
            }
        }
    }
    cout<<2*sum-mx<<endl;
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n;
for (int i=0, a, b, c; i<n; i++) {
    cin>>a>>b>>c; sum+=c;
    adj[a].push_back({b, c}); adj[b].push_back({a, c});
}
memset(dist, -1, sizeof dist);
dist[0] = 0;
b(0);
return 0;
}