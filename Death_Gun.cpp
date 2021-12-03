#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int n;
vector<int> adj[901];
unordered_map<string, int> ump;
vector<string> lis;
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>n;
int ind[901];
memset(ind, 0, sizeof ind);
for (int i=0; i<n; i++) {
    string a, b;cin>>a>>b;
    if(!ump.count(a)) { 
        ump[a] = lis.size(); lis.push_back(a);
    }
    if(!ump.count(b)) {
        ump[b] = lis.size(); lis.push_back(b);
    }
    adj[ump[b]].push_back(ump[a]);
    ind[ump[a]]++;
}
priority_queue<int, vector<int>, greater<int>> pq;
for (int i=0; i<lis.size(); i++) {
    if (ind[i]==0) pq.push(i);
} 

while(!pq.empty()) {
    int cur = pq.top(); pq.pop(); cout<<lis[cur]<<endl; 
    for (auto i: adj[cur]) {
        if (--ind[i]==0) pq.push(i);
    }
}
 
return 0;
}