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

int n; cin>>n;
vector<ll> pref(n+1);
for (int i=0; i<n; i++) {
    ll a; cin>>a;
    pref[i+1] = pref[i] + a;
}
ll minval = pref[0], maxval = pref[1];
for (int i=1; i<=n; i++) {
    maxval = max(maxval, pref[i]-minval);
    minval = min(minval, pref[i]);
}    
cout<<maxval<<"\n";

return 0;
}