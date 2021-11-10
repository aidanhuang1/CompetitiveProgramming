#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

struct moving {
    int row;
    int col;
    int moves;
};

int m, n, startr, startc, endr, endc;
char maze[1001][1001]; bool vis[1001][1001]; int dist[1001][1001];
int mr[] = {-1, 0, 1, 0, -2, -1, 1, 2, 2, 1, -1, -2};
int mc[] = {0, 1, 0, -1, 1, 2, 2, 1, -1, -2, -2, -1};

bool valid(int row, int col) {
    if (row>=0 && row<m && col>=0 && col<n && maze[row][col]=='.') {
        return true;
    }
    return false;
}

void search() {
    queue<moving> q;
    memset(vis, false, sizeof vis);
    memset(dist, 0, sizeof dist);
    q.push({startr, startc, 0});
    vis[startr][startc] = true;
    while(!q.empty()) {
        moving cur = q.front(); q.pop();
        if (cur.row==endr && cur.col==endc) {
            cout<<cur.moves<<endl;
            return;
        }
        for (int i=0; i<12; i++) {
            moving next = {cur.row+mr[i], cur.col+mc[i], cur.moves+1};
            if (valid(next.row, next.col) && !vis[next.row][next.col]) {
                vis[next.row][next.col] = true;
                q.push(next);
            }
        }
    }
    if(!vis[endr][endc]) cout<<-1<<endl;
    return;
}


int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>m>>n;
cin>>startr>>startc;
cin>>endr>>endc;
startr--;startc--;endr--;endc--;
for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
        cin>>maze[i][j];
    }
}
search();
return 0;
}