#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1501;

int rowmoves[] = {0, 1, 0, -1};
int colmoves[] = {1, 0, -1, 0};

int n, m, k;
ll pixels[MM][MM];
bool original[MM][MM] = {}; //if the pixel is an original pixel and its value is > 0
ll dist[MM][MM] = {INF};

bool valid(int row, int col) {
    if (row<0 || row>=n || col<0 || col>=m) return false;
    return true;
}

void search(int row, int col, int distance, int colourvalue) {
    if (!valid(row, col) || distance>k || original[row][col]) return;
    if (!original[row][col]) {
        if (dist[row][col]>distance || (dist[row][col]==distance && colourvalue<pixels[row][col])) {
            dist[row][col] = distance;
            pixels[row][col] = colourvalue;
        }
    }
    for (int k=0; k<4; k++) {
        search(row+rowmoves[k], col+colmoves[k], distance+1, colourvalue);
    }
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>m>>k;
// memset(original, 0, sizeof original); 
memset(dist, INF, sizeof dist);
for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
        cin>>pixels[i][j];
        if (pixels[i][j]!=0) {
            original[i][j] = true;
            dist[i][j] = 0;
        }
    }
}
for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
        if (original[i][j]) {
            for (int k=0; k<4; k++) {
                search(i+rowmoves[k], j+colmoves[k], 1, pixels[i][j]);
            }
        }
    }
}
for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
        cout<<pixels[i][j]<<" ";
    }
    cout<<"\n";
}
return 0;
}