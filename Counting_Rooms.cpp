#include <bits/stdc++.h> 
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
ll height, width, counts=0;
string floormap[2500];
vector<vector<bool>> visited;

void floodfill(int row, int col) {
    if (row<0 || row >= height || col<0 || col>=width || visited[row][col] || floormap[row][col]=='#') {
        return;
    }
    visited[row][col] = true;
    floodfill(row-1, col);
    floodfill(row+1, col);
    floodfill(row, col+1);
    floodfill(row, col-1);
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>height>>width;
visited.resize(height, vector<bool>(width));

for (int i=0; i<height; i++) {
    cin >> floormap[i];
}

for (int i=0; i<height; i++) {
    for (int j=0; j<width; j++) {
        
        if (floormap[i][j]=='.' && !visited[i][j]) {
            counts++;
            //cout <<boolalpha<<visited[i][j]<<endl;
        }
        floodfill(i, j);
        
    }
}
cout << counts << endl;
return 0;
}