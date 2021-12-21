#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

struct cow {
    int turns;
    int row;
    int col;
    int direction; //-1 = no direction, 0 = right, 1 = down
};

int main() {
//freopen(, , stdin);
//freopen(, , stdout);
cin.sync_with_stdio(0);
cin.tie(0);


int t;
cin>>t;
for (int p=0, n, k; p<t; p++) { //iterate through test cases
    cin>>n>>k;
    char map[n][n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin>>map[i][j];
        }
    }
    int cnt = 0;

    queue<cow> q;
    q.push({0, 0, 0, -1});

    while(!q.empty()) {
        cow cur = q.front(); q.pop();
        if (cur.row>=0 && cur.row<n && cur.col>=0 && cur.col<n && map[cur.row][cur.col]=='.' && cur.turns<=k) { //valid
            // cout<<cur.row<<" "<<cur.col<<endl;
            if (cur.row==n-1 && cur.col==n-1) { //you reach the barn
                cnt++;
            } else {
                if (cur.direction==-1 && cur.turns==0) { //you are at the start
                    q.push({0, cur.row+1, cur.col, 1}); //go down
                    q.push({0, cur.row, cur.col+1, 0}); //go right
                } else if (cur.turns==k) { //all your turns are used up and you can only keep going in the direction you are already heading
                    if (cur.direction==1) q.push({cur.turns, cur.row+1, cur.col, cur.direction}); //go down
                    else if (cur.direction==0) q.push({cur.turns, cur.row, cur.col+1, cur.direction}); //go right
                } else if (cur.turns<k) {
                    if (cur.direction==1) { //you are already going down
                        q.push({cur.turns, cur.row+1, cur.col, 1}); //keep going down
                        q.push({cur.turns+1, cur.row, cur.col+1, 0}); //go right
                    } else if (cur.direction==0) { //you are already going right
                        q.push({cur.turns+1, cur.row+1, cur.col, 1}); //go down
                        q.push({cur.turns, cur.row, cur.col+1, 0}); //keep going right
                    }
                }
            }
        }
    }   
    cout<<cnt<<"\n";

}


return 0;
}