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
vector<ll> v(n);
for (ll i=0; i<n; i++) {
    cin>>v[i];
}

for (ll i=0; i<n; i++) {
    ll total = 0;
    ll p1= 0, p2=1;
    if (p1==i) {p1++; p2++; total+=v[1];}
    else {total+=v[0];}

    while(p2<n) {
        if (p2==i) {
            p2++;
        }
        if(p1==i) {
            p1++;
        }
        if (p2>=n) break;
        total+=abs(v[p1]-v[p2]);
        p1++; p2++;
    }
    if (i==n-1)  {
        total+=abs(v[n-2]);
    } else {
        total+=abs(v[n-1]);
    }
    cout<<total<<"\n";
    
}


return 0;
}