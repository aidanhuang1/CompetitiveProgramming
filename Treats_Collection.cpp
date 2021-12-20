#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

ll n, k; cin>>n>>k;
vector<ll> v(n);
for (int i=0; i<n; i++) {
    cin>>v[i];
}
sort(v.begin(), v.end());
for (int i=0; i<n; i++) {
    if (i+k-1>=n) break;
    ll left = v[i], right = v[i+k-1];
    if (left<=0 && right<=0) {
        cout<<abs(v[i])<<endl;
    } else if (left<=0 && right>=0 ) {
        cout<<abs(v[i+k-1])+abs(v[i-k-1])+abs(v[i])<<endl;
    } else if (left>=0 && right>=0) {
        cout<<abs(v[i+k-1])<<endl;
    }
}

return 0;
}