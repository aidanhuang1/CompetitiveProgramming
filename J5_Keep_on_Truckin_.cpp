#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int a, b; cin>>a>>b;
int n; cin>>n;
bool motels[7001]; memset(motels, 0, sizeof motels);
for (int i=0; i<n; i++) {
    int x; cin>>x;
    motels[x] = true;
}
motels [0] = true;
motels [990] = true;
motels [1010] = true;
motels [1970] = true;
motels [2030] = true;
motels [2940] = true;
motels [3060] = true;
motels [3930] = true;
motels [4060] = true;
motels [4970] = true;
motels [5030] = true;
motels [5990] = true;
motels [6010] = true;
motels [7000] = true;

ll dp[7001];
memset(dp, 0, sizeof dp);
dp[0] = 1;
for (int i=0; i<=7000; i++)  {
    if (motels[i]) {
        for (int j=a; j<=b; j++) {
            if (j+i<=7000 && motels[i+j]) {
                dp[i+j] += dp[i];
            }
        }
    }
}
cout<<dp[7000]<<endl;
return 0;
}