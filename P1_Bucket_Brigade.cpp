#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

char grid[10][10];
int dist[10][10];
pair<int, int> start, finish, rock;
vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool valid(int i, int j) {
    if (i<0 || i>=10 || j<0 || j>=10 || dist[i][j]!=-1) return false;
    return true;
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

for (int i=0; i<10; i++) {
    for (int j=0; j<10; j++) {
        cin>>grid[i][j];
        if (grid[i][j]=='B') {
            start.first = i; start.second=j;
        }
        if (grid[i][j]=='L') {  
            finish.first = i; finish.second=j;
        }
        if (grid[i][j]=='R') {
            rock.first = i; rock.second=j;
        }
    }
}
memset(dist, -1, sizeof dist);
queue<pair<int, int>> q;
q.push(start); dist[start.first][start.second] = 0;
while(!q.empty()) {
    pair<int, int> cur = q.front(); q.pop();
    for (auto i: moves) {
        int newr = cur.first+i.first, newc = cur.second+i.second;
        if (valid(newr, newc) && grid[newr][newc]!='R') {
            q.push({newr, newc});
            dist[newr][newc] = dist[cur.first][cur.second]+1;
        }
    }
}
cout<<dist[finish.first][finish.second]-1<<endl;
 
return 0;
}