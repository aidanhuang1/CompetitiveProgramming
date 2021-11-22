#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
vector<int> ans;
vector<int> adj[8]; int ind[8];
void top(){
    priority_queue<int, vector<int>, greater<int>> q; 
    for (int i=1; i<=7; i++) {
        if (ind[i]==0) q.push(i);
    }
    while(!q.empty()) {
        int u = q.top(); q.pop();ans.push_back(u);
        for (int v: adj[u]) {
            --ind[v];
            if (ind[v]==0) {
                q.push(v);
            }
        }
    }
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
memset(ind, 0, sizeof ind);
adj[1].push_back(7); adj[1].push_back(4); adj[2].push_back(1); adj[3].push_back(4); adj[3].push_back(5);
ind[7]++; ind[4]+=2; ind[1]++; ind[5]++;
while(true) {
    int a, b;cin>>a>>b;
    if (a==0&&b==0) break;
    adj[a].push_back(b);
    ind[b]++;
    
}
 top();
if (ans.size()==7) {
    for(auto i: ans) cout<<i<<" "; cout<<endl;
} else cout<<"Cannot complete these tasks. Going to bed."<<endl;
return 0;
}