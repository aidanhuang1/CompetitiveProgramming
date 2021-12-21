#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
// freopen(, , stdin);
// freopen(, , stdout);
cin.sync_with_stdio(0);
cin.tie(0);

ll n, total = 0; cin>>n;
string cow; cin>>cow;

ll gcows[n+1], hcows[n+1];
gcows[0] = 0; hcows[0]=0;
for (ll i=1; i<=n; i++) {
    gcows[i] = gcows[i-1];
    hcows[i] = hcows[i-1];
    if (cow[i-1]=='G') gcows[i]++;
    else if (cow[i-1]=='H') hcows[i]++;
}
for (ll i=3; i<=n; i++) {
    for (ll j=0; j+i<=n; j++) { //maybe do j+i<=n?
        if (gcows[j+i]-gcows[j]==1 || hcows[j+i]-hcows[j]==1) total++;
    }
}
cout<<total<<"\n";
return 0;
}