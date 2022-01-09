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

int n, k, b; cin>>n>>k>>b;
int pf[n+1];
bool cow[n+1];
memset(cow, 1, sizeof cow);
for (int i=0; i<b; i++) {
    int a; cin>>a;
    cow[a] = false;
}
pf[0] = 0;
for (int i=1; i<=n; i++) {
    pf[i]=cow[i]+pf[i-1];
}
int ans = 0;
for (int i=k; i<=n; i++) {
    ans = max(ans, pf[i]-pf[i-k]);
}
cout<<k-ans<<"\n";
return 0;
}