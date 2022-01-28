#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int n, m;
char grid[5][101];
int dist[5][101];
bool vis[5][101];

bool bounds(int row, int col) {
    if (row<0 || row>=n || col<0 || col>=m || grid[row][col]=='W') return false;
    return true;
}
bool bounds2(int row, int col) {
    if (row<0 || row>=n || col<0 || col>=m || grid[row][col]=='W' || vis[row][col]) return false;
    return true;
}

void camerasearchL(int row, int col) {
    if (!bounds(row, col)) return;
    if (grid[row][col] == '.') {
        grid[row][col] = 'W';
    }
    return camerasearchL(row, col-1);
}
void camerasearchU(int row, int col) {
    if (!bounds(row, col)) return;
    if (grid[row][col] == '.') {
        grid[row][col] = 'W';
    }
    return camerasearchU(row-1, col);
}
void camerasearchR(int row, int col) {
    
    if (!bounds(row, col)) return;
    if (grid[row][col] == '.') {
        grid[row][col] = 'W';
    }
    return camerasearchR(row, col+1);
}
void camerasearchD(int row, int col) {
    if (!bounds(row, col)) return;
    if (grid[row][col] == '.') {
        grid[row][col] = 'W';
    }
    return camerasearchD(row+1, col);
}

void bfs(int r, int c, int s) {
    queue<piii> q; q.push({r, {c, s}});
    while(!q.empty()) {
        piii u = q.front(); q.pop();
        int row = u.first, col = u.second.first, steps = u.second.second;
        if (!bounds2(row, col)) continue;
        if (steps<dist[row][col]) {
            dist[row][col] = steps;
            if (vis[row][col]) {
                vis[row][col] = false;
            }
        }    vis[row][col] = true;

        if (grid[row][col]=='D') {
            q.push({row+1, {col, steps}});
        } else if (grid[row][col]=='R') {
            bfs(row, col+1, steps);
        } else if (grid[row][col]=='U') {
            bfs(row-1, col, steps);
        } else if (grid[row][col]=='L') {
            bfs(row, col-1, steps);
        } else {
            bfs(row-1, col, steps+1);
            bfs(row+1, col, steps+1);
            bfs(row, col+1, steps+1);
            bfs(row, col-1, steps+1);
        }
    }
    
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
int srow, scol;
vector<pii> cam, spaces;
memset(vis, 0, sizeof vis); memset(dist, INF, sizeof dist);
for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
        cin>>grid[i][j];
        if (grid[i][j]=='S') {
            srow = i, scol = j;
            dist[i][j] = 0;
        } else if (grid[i][j]=='C') {
            cam.push_back({i,j});
        } else if (grid[i][j]=='W') {
            vis[i][j] = true;   
        } else if (grid[i][j]=='.') {
            spaces.push_back({i,j});
        }
    }
}

for (pii i: cam) {
    camerasearchL(i.first, i.second-1);
    camerasearchD(i.first+1, i.second);
    camerasearchU(i.first-1, i.second);
    camerasearchR(i.first, i.second+1);
    grid[i.first][i.second]= true;
}

bfs(srow, scol, 0);
for (pii i: spaces) {
    if (dist[i.first][i.second]==INF) cout<<-1<<"\n"; else
    cout<<dist[i.first][i.second]<<"\n";
}

return 0;
}