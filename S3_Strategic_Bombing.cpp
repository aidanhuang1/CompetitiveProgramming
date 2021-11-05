#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
bool adj[26][26];

bool bfs(int x) {
    queue<int> q; bool vis[26];
    memset(vis, false, sizeof(vis));
    q.push(x);vis[x]=1;
    while(!q.empty()) {
        int cur = q.front(); q.pop();
        for (int i=0; i<26; i++) {
            if (adj[cur][i] && !vis[i]) {
                q.push(i); vis[i] = true;
                if (i==1) return true;
            }
        }
    }
    return false;
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);
 
string s; vector<string> v;
while(true) {
    cin>>s;
    if (s=="**") {break;}
    int x = s[0]-'A', y=s[1]-'A';
    adj[x][y] = adj[y][x] = true;
    v.push_back(s);
}
int c = 0;
for (string s: v) {
    int x = s[0]-'A', y=s[1]-'A';
    adj[x][y] = adj[y][x] = false;
    if (!bfs(0)) {
        c++; cout<<s<<endl;
    }
    adj[x][y] = adj[y][x] = true;
}
cout << "There are "<< c << " disconnecting roads." << endl;
 
return 0;
}