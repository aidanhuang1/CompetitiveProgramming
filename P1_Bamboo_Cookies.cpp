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

ll n, odd= 0, even=0; cin>>n;
for (ll i=0, x; i<n; i++) {
    cin>>x; if (x%2==0) even++; else odd++;
}

cout<<(odd/2)+(even/2)<<endl;
return 0;
}   