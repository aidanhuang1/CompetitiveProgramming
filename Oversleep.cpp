#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int n, m; 
char grid[1001][1001];
int dist[1001][1001];
pair<int, int> startp, endp;
vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool valid(int r, int c) {
    if (r<0 || r>=n || c<0 || c>=m || grid[r][c]=='X' || dist[r][c]!=-1) return false;
    return true;
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>n>>m;
for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
        cin>>grid[i][j];
        if (grid[i][j]=='s') startp = {i, j};
        if (grid[i][j]=='e') endp = {i,j};
    }
}
queue<pair<int, int>> q; memset(dist, -1, sizeof dist);
q.push(startp);
while(!q.empty()) {
    pair<int, int> cur = q.front(); q.pop(); 
    for (auto i: moves) {
        int newr = i.first+cur.first, newc = i.second+cur.second;
        if (valid(newr, newc)) {
            dist[newr][newc] = dist[cur.first][cur.second]+1;
            q.push({newr, newc});
        }
    }
}
cout<<dist[endp.first][endp.second]<<endl;
 
return 0;
}