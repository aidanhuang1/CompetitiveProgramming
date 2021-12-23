#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;


int main() {
freopen("maxcross.in", "r", stdin);
freopen("maxcross.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int n, k, b;
cin>>n>>k>>b;
vector<int> pref(n+1);
bool broken[n+1]; memset(broken, 0, sizeof broken);
for (int i=0; i<b; i++) {
    int a; cin>>a;
    broken[a] = 1;
}
for (int i=1; i<=n; i++) {
    pref[i] = pref[i-1];
    pref[i]+=broken[i];
}
int ans = (int)1e6;
for (int i=0; i<=n-k; i++) {
    ans = min(ans, pref[i+k]-pref[i]);
}   
cout<<ans<<endl;
return 0;
}