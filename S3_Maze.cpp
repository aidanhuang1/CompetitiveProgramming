#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

struct point {
    int r;
    int c;
    int dist;
};

int bfs(vector<vector<char>> &grid, ll r, ll c) {
    vector<vector<ll>> dist(r, vector<ll>(c));
    bool visited[21][21] ;
    memset(visited, false, sizeof(visited));
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            dist[i][j] = 1e9;
            if (grid[i][j]=='*') {
                visited[i][j] = true;
            }
        }
    }
    queue<point> q;
    q.push({0, 0, 1});
    while(!q.empty()) {
        point temp = q.front();
        q.pop();
        
        if (temp.r < 0 || temp.r >= r || temp.c<0 || temp.c>=c || visited[temp.r][temp.c] || grid[temp.r][temp.c]=='*') {
            continue;
        };
        dist[temp.r][temp.c] = min((int)dist[temp.r][temp.c], temp.dist);
        visited[temp.r][temp.c] = true;
        if (!visited[temp.r][temp.c] && grid[temp.r][temp.c]=='-') { //left or right
            q.push({temp.r, temp.c-1, temp.dist+1});
            q.push({temp.r, temp.c+1, temp.dist+1});
        }
        else if (!visited[temp.r][temp.c] && grid[temp.r][temp.c]=='|') { // up or down
            q.push({temp.r+1, temp.c, temp.dist+1});
            q.push({temp.r-1, temp.c, temp.dist+1});
        }
        else if (!visited[temp.r][temp.c] && grid[temp.r][temp.c]=='+') { //any
            q.push({temp.r+1, temp.c, temp.dist+1});
            q.push({temp.r-1, temp.c, temp.dist+1});
            q.push({temp.r, temp.c+1, temp.dist+1});
            q.push({temp.r, temp.c-1, temp.dist+1});
        }
    }
        
};

ll cases;
int main() {
cin.sync_with_stdio(0);
cin.tie(0);


cin>>cases;
while(cases--) {
    ll r, c;
    cin >>r>>c;
    vector<vector<char>> grid(r, vector<char>(c));
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            cin >> grid[i][j];
        }
    }
    return bfs(grid, r, c);
    
}
 
return 0;
}