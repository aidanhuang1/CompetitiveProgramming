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
int array[n+1];
for (int i=1; i<=n; i++) {
    cin>>array[i];
}
int dp[n+1];
memset(dp, 0, sizeof dp);
dp[1] = array[1];
for (int i=2; i<=n; i++) {
    dp[i] = max(dp[i-2]+array[i], dp[i-1]);
}
cout<<dp[n]<<endl;
return 0;
}