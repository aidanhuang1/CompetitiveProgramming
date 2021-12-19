#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
//freopen(, , stdin);
//freopen(, , stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int k, n; cin>>k>>n;
int arr[k][n];
for (int i=0; i<k; i++) {
    for (int j=0; j<n; j++) {
        cin>>arr[i][j];
    }
}
for (int i=0; i<n; i++) {
    for (int j=i+1; j<n; j++) {
        bool valid = true;
        for (int row=0; row<k; row++) {
            
        }
    }
}

return 0;
}