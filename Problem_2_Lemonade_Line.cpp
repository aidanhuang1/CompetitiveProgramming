#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
freopen("lemonade.in", "r", stdin);
freopen("lemonade.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);


int n; cin>>n;vector<ll> v(n);
for (int i=0; i<n; i++) {
    cin>>v[i];
}
sort(v.rbegin(), v.rend());
int ans = 0;
for (int i=0; i<n; i++) {
    if (v[i]>=ans) {
        ans++;
    }
}
cout<<ans<<"\n";

return 0;
}