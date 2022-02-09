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

int n; cin>>n;

ll ans = 0, prev;
cin>>prev;
if (n==1) {cout<<0<<"\n"; return 0;}
for (int i=1; i<n; i++) {
    ll temp; cin>>temp;
    ans+=temp+prev;
    prev = temp;
}

cout<<ans<<"\n";
return 0;
}