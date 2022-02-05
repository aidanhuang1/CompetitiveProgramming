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

vector<ll> dp(100);
dp[0] = 0;
dp[1] = 1;
for (int i=2; i<100; i++) {
    dp[i] = dp[i-1]+dp[i-2];
}
for (auto i: dp) cout<<i<<endl;
return 0;
}