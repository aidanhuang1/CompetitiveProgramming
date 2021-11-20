#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int r, c, t;
pair<int, int> start, office;
char grid[1001][1001];
vector<pair<int, int>> teleporters;
vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int dist[1001][1001];

bool valid(int newr, int newc) {
    if (newr<0 || newr>=r || newc<0 || newc>=c || grid[newr][newc]=='X') return false;
    return true;
}

int search() {
    queue<pair<int, int>> q;
    q.push(start);
    dist[start.first][start.second] = 0;
    while(!q.empty()) {
        pair<int, int> cur = q.front(); q.pop();
        for (auto i: moves) {
            int newr = cur.first+i.first, newc = cur.second+i.second;
            if (valid(newr, newc) && dist[newr][newc]==-1) {
                dist[newr][newc] = dist[cur.first][cur.second]+1;
                q.push({newr, newc});
            }
        }
    }

    vector<int> timetotele;
    for (auto i: teleporters) {
        timetotele.push_back(dist[i.first][i.second]);
    }
    sort(timetotele.begin(), timetotele.end());
    return abs(dist[office.first][office.second]-timetotele[0]);
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>r>>c;
cin>>start.first>>start.second;
cin>>office.first>>office.second;
// memset(grid, 0, sizeof grid);
for (int i=0; i<r; i++) {
    string temp; cin>>temp;
    for (int j=0; j<c; j++) {
        grid[i][j] = temp[j];
    }
}

cin>>t;
for (int i=0, r, c; i<t; i++) {
    cin>>r>>c;
    teleporters.push_back({r,c});
}
memset(dist, -1, sizeof dist);
cout<<search()<<endl;
 
return 0;
}