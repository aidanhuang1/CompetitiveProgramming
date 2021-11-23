#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
unordered_map<string, int> M1; unordered_map<int, string> M2;
vector<int> adj[901]; 
int ind[901];
int m, x=0;

int vis[901];

//create a method to detect any cycles at the beginning and remove those cycles before we start with the topo sort
//should we maybe use an adjacency matrix if we want to easily delete connections?

void cyc(int u) {
    queue<int> q; q.push(u); 
    while(!q.empty()) {
        int cur = q.front(); q.pop();
        for (auto i: adj[cur]) {
            if (vis[i]==1) { //cycle detected

            }
        }   
    }
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>m;
memset(ind, 0, sizeof ind); memset(vis, 0, sizeof vis);
for (int i=0; i<m; i++) {
    string a, b;
    cin>>a>>b;
    if (M1.count(a)==0) {
        M1[a] = x; M2[x] = a; x++;
    }
    if (M1.count(b)==0) {
        M1[b] = x; M2[x]=b; x++;
    }
    adj[M1[b]].push_back(M1[a]);
    ind[M1[a]]++;
}
priority_queue<int> q; //should we keep the priority_queue or just use the normal queue?
for (int i=0; i<M1.size(); i++) {
    if (ind[i]==0) q.push(i);
}
while(!q.empty()) {
    int cur = q.top(); q.pop(); cout<<M2[cur]<<endl;
    for (auto i: adj[cur]) {
        --ind[i];
        if (ind[i]==0) {
            q.push(i);
        }
    }
}

return 0;
}
