#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1001;

int n, temparea=0, tempperim = 0;
char grid[MM][MM];
bool visited[MM][MM];

bool validate(int row, int col) {
    if (row<0 || row>=n || col<0 || col>=n) return false;
    return true;
}

void ff(int row, int col) {
    if (!validate(row, col) || grid[row][col]=='.') {
        tempperim++;
        return;
    }
    if (visited[row][col]) return;
    temparea++;
    visited[row][col] = true;
    ff(row+1, col);
    ff(row, col-1);
    ff(row-1, col);
    ff(row, col+1);
}

int main() {
freopen("perimeter.in", "r", stdin);
freopen("perimeter.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n;

for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
        cin>>grid[i][j];
    }
}

memset(visited, 0, sizeof visited);

int maxarea = 0, maxperim = 0;
for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
        if(!visited[i][j]) {
            temparea = 0, tempperim = 0;
            ff(i,j);

            if (maxarea==temparea) {
                maxperim = min(maxperim, tempperim);
            } else if (maxarea<temparea) {
                maxperim = tempperim;
                maxarea = temparea;
            }
            // maxarea = max(temparea, maxarea);
            // maxperim = max(maxperim, tempperim);

            
        }
    }
}
cout<<maxarea<<" "<<maxperim<<endl;
return 0;
}