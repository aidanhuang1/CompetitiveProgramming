#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
freopen("div7.in", "r", stdin);
freopen("div7.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

ll n; cin>>n;
vector<ll> v(n);vector<ll> psum(n+1);
for (int i=0; i<n; i++) {
    cin>>v[i];psum[i+1] = psum[i]+v[i];
}
    
int ans = 0;
for (int i=0; i<n+1; i++) {
    for (int j=i; j<n+1; j++) {
        ll temp = psum[j]-psum[i];
        if (temp%7==0) ans = max(ans, j-i);
    }
}
cout<<ans<<"\n";
return 0;
}