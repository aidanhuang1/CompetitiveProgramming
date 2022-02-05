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

int n; cin>>n;
int stones[n+1];
for (int i=1; i<=n; i++) {
    cin>>stones[i];
}
ll dp[n+1]; memset(dp, INF, sizeof dp);
dp[1] = 0;
for (int i=1; i<=n; i++) {
    for (int j=1; j<=2; j++) {
        if (i+j<=n) {
            dp[i+j] = min(dp[i+j], dp[i]+ abs(stones[i]-stones[i+j]));
        }
    }
}
cout<<dp[n]<<endl;

return 0;
}