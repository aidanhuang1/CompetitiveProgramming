#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

ll n; cin>>n;
ll psa[n+1]; 
psa[0] = 0;
for (ll i=1; i<=n; i++) {
    psa[i] = psa[i-1]+i;
}
ll p1 = 1, p2 = 1, count = 0;
while(p2<=n) {
    while(psa[p2]-psa[p1-1]>n) {
        p1++;
    }
    if (psa[p2]-psa[p1-1]==n) {
        count++;
    }
    p2++;
}
cout<<count<<endl;
return 0;
}