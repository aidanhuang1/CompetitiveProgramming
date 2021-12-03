#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int n;
vector<int> adj[101];
bool vis[101];
void d(int u){
    vis[u] = true;
    for (auto i: adj[u]) {
        d(i);
    }
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n;
for (int i=0, a, b; i<n-1; i++) {
    cin>>a>>b;
    adj[b].push_back(a);
}
for (int i=1; i<=n; i++) {
    memset(vis, 0, sizeof vis);
    d(i);
    bool valid = true;  
    for (int j=1; j<=n; j++) {
        if (!vis[j]) {
            valid = false;
        }
    }
    if (valid) {
        cout<<i<<endl; goto done;
    }
}
cout<<-1<<endl;
done:
return 0;
}