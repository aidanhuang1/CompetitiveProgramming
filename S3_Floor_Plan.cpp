#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int flooring, r, c, rooms=0;
char grid[26][26]; bool vis[26][26];
vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
vector<int> sq;

bool valid (int i, int j) {
    if (i<0 || i>=r || j<0 || j>=c || grid[i][j]=='I') return false;
    return true;    
}

void search(int i, int j) {
    if (grid[i][j]=='.') {
        rooms++; int space=0;
        queue<pair<int, int>> q;
        q.push({i, j});
        while(!q.empty()) {
            pair<int, int> cur = q.front(); q.pop();space++;
            if (grid[cur.first][cur.second]=='.') grid[cur.first][cur.second]='I';
            for (auto i: moves) {
                int newr = i.first + cur.first, newc = i.second+cur.second;
                if (valid(newr, newc)) {
                    grid[newr][newc] = 'I';
                    q.push({newr, newc});
                }
            }
        }
        sq.push_back(space);
    }
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>flooring>>r>>c;

for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
        cin>>grid[i][j];    
    }
}
memset(vis, false, sizeof vis);
for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
        search(i, j);
    }
}
sort(sq.begin(), sq.end());
int roomsuse=0;
for (int i=rooms-1; i>=0; i--) {
    if (flooring-sq[i]>=0) {
        roomsuse++;
        flooring-=sq[i];
    } else break;
}
printf("%d rooms, %d square metre(s) left over", roomsuse, flooring);
return 0;
}