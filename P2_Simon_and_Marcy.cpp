#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e3+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int val[MM], weight[MM];
int n, w; cin>>n>>w;
for (int i=1; i<=n; i++) {
    cin>>val[i]>>weight[i];
}
ll dp[MM];
memset(dp, 0, sizeof dp);
for (int i=1; i<=n; i++) {
    for (int j=w; j>0; j--) {
        if(j-weight[i]>=0) {
            dp[j] = max(dp[j], dp[j-weight[i]]+val[i]);
        }
    }
}
cout<<dp[w]<<endl;

return 0;
}