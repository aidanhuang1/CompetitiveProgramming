#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
freopen("bcount.in", "r", stdin);
freopen("bcount.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int n, q; cin>>n>>q;
int h[n+1], g[n+1], j[n+1];

for (int i=0, a; i<n; i++) {
    cin>>a;
    h[i+1] = h[i]; g[i+1] = g[i]; j[i+1] = j[i];
    if (a==1) h[i+1]++;
    else if (a==2) g[i+1]++;
    else if (a==3) j[i+1]++;
    
}
for (int i=0, a, b; i<q; i++) {
    cin>>a>>b;
    cout<<h[b]-h[a-1]<<" "<<g[b]-g[a-1]<<" "<<j[b]-j[a-1]<<"\n";
}

return 0;
}