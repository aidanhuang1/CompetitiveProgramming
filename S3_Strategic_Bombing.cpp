#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

bool adj[27][27];
bool bfs(int x, int y) {
    queue<int> q;
    bool visited[27];
    q.push(x); visited[x] = true;
    while(!q.empty()) {
        int cur = q.front(); q.pop();
        visited[cur] = true;
        for (int i=0; i<26; i++) {
            if (adj[cur][y] && !visited[y]) {
                q.push(y);
                if (y==1) {
                    return true;
                }
            }

        }
    }
    return false;
}
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

string a; cin>>a;
int count =  0;
while(a!="**") {
    int x = a.at(0)-'A', y = a.at(1)-'A';
    adj[x][y] = true; adj[y][x] = true;
}
for (int i=0; i<26; i++) {
    for (int j=0; j<26; j++) {
        adj[i][j] = false; adj[j][i] = false;
        if (bfs(0, 1)) {
            count++;
            cout<<(char)i<<(char)j<<endl;
        }
        adj[i][j]= true; adj[j][i] = true;
    }
}
cout<<"There are "<<count<<" disconnecting roads."<<endl;
 
return 0;
}