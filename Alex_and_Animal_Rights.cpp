#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
int r, c;
char grid[36][51]; int ct;
vector<pair<int, int>> moves = {{0,1},{1,0},{0,-1},{-1,0}};

bool valid(pair<int, int> x) {
    if (x.first<0 || x.first>=r || x.second<0 || x.second>=c || grid[x.first][x.second]=='#') return false;
    return true;
}

void s(pair<int, int> x) {
    queue<pair<int, int>> q; q.push(x); bool monkey = false;
    while(!q.empty()) {
        pair<int, int> cur = q.front(); q.pop();
        if (valid(cur)) {
            if (grid[cur.first][cur.second]=='M') monkey = true;
            grid[cur.first][cur.second] = '#';
            for (auto i: moves) {
                int newr = i.first+cur.first, newc = i.second+cur.second;
                q.push({newr, newc});
            }
        }
    }
    if (monkey) ct++;
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);
 
cin>>r>>c;
for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
        cin>>grid[i][j];
    }
}
for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
        s({i,j});
    }
}

cout<<ct<<endl;


return 0;
}