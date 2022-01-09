#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 20;

//we floodfill the entire area that we start at, getting all the same letters,
//and then we   

int n;
char grid[MM][MM];
bool visited[MM][MM];
int contiguous[26][26];

void ff(int row, int col) {

}

int main() {
//COMMENT OUT FILE I/O WHEN RUNNING LOCALLY
//freopen(, , stdin);
//freopen(, , stdout);
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n;
for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
        cin>>grid[i][j];
    }
}
memset(visited, 0, sizeof visited); memset(contiguous, 0, sizeof contiguous);
for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
        if (!visited[i][j]) {

        }
    }
}

return 0;
}