#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
//freopen(, , stdin);
//freopen(, , stdout);  
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
vector<int> h(n+1), p(n+1), s(n+1);
for (int i=1; i<=n; i++) {
    char a; cin>>a;
    h[i] = h[i-1]; p[i]=p[i-1]; s[i]=s[i-1];
    if (a=='P') p[i]++;
    else if (a=='H') h[i]++;
    else if (a=='S') s[i]++;
}

int ans = 0;
for (int i=1; i<=n; i++) {
    int start = max(h[i], max(p[i], s[i]));
    int end = max(max(h[n]-h[i], p[n]-p[i]), s[n]-s[i]);
    ans = max(ans, start+end);
}
cout<<ans<<'\n';

return 0;
}