#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

map<string, vector<string>> adj; 
void bfs(string start, string end) { 
    map<string, bool> vis;
    map<string, int> dist;
    map<string, string> previous;
    queue<string> q;
    q.push(start);
    previous[start] = "null";
    while(!q.empty()) {
        string cur = q.front(); q.pop(); 
        vis[cur] = true;
        if (cur==end) {
            stack<string> order;
            string crawl = end;
            order.push(crawl.substr(0, 1));
            while(previous[crawl]!="null") {
                order.push(previous[crawl].substr(0, 1));
                crawl = previous[crawl];
            }
            while(!order.empty()) {
                cout<<order.top();order.pop();
            }
            cout<<endl; 
            return;
        }
        for (string next: adj[cur]) {
            if (!vis[next]) {
                dist[next] = dist[cur]+1;
                previous[next] = cur;
                q.push(next);
            }
        }
    }
    return;
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int m, n; cin>>m>>n;
for (int i=0; i<m; i++) {
    string a, b;
    cin>>a>>b;    
    adj[a].push_back(b); adj[b].push_back(a);
}
for (int i=0; i<n; i++) {
    string a, b;
    cin>>a>>b;
    bfs(a,b);
}
return 0;
}