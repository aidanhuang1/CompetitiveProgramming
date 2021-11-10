#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
int m, n, sr, sc, er, ec;

char grid[1001][1001];
int mr[] = {-1, 0, 1, 0, -2, -1, 1, 2, 2, 1, -1, -2};
int mc[] = {0, 1, 0, -1, 1, 2,2,1,-1,-2,-2,-1};

bool valid(pair<int, int> x) {
    if (x.first>=0 && x.first<m && x.second>=0 && x.second<n && grid[x.first][x.second]=='.') {
        return true;
    }
    return false;
}

int search(pair<int, int> start, pair<int, int> end) {
    int moves = 0;
    queue<pair<int, int>> q;
    int dist[m][n]; bool vis[m][n];
    memset(dist, 0, sizeof dist); memset(vis, false, sizeof vis);
    q.push(start);
    vis[start.first][start.second] = true;
    while(!q.empty()) {
        pair<int, int> cur = q.front(); q.pop();
        if (vis[end.first][end.second]) { return moves;}
        for (int i=0; i<12; i++) {
            int newr = cur.first+mr[i];
            int newc = cur.second+mc[i];
            if (valid({newr, newc}) && !vis[newr][newc]) {
                vis[newr][newc] = true;
                q.push({newr, newc});
                
            }
        }
        moves++;
    }
    if (vis[end.first][end.second]) {
        return moves;
    } 
    return -1;
    
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);


cin>>m>>n;
cin>>sr>>sc;
cin>>er>>ec;
for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
        cin>>grid[i][j];
    }
}

search({sr, sc}, {er, ec});
 
return 0;
}