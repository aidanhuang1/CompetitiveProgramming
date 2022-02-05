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

vector<int> dp(1000, INF);
int n, x; cin>>n>>x;
vector<int> coins(n);
for (int i=0; i<n; i++) {
cin>>coins[i];
}
dp[0] = 0;
for (int i=1; i<=1000; i++) {
    for (auto j: coins) {
        if (i-j>=0)
        dp[i] = min(dp[i], dp[i-j]+1);
    }
} 
//and then just output, etc...
for (auto i: dp) cout<<i<<endl;

return 0;
}