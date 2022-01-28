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
vector<int> m(2001, 0); vector<int> f(4001, 0); 
for (int i=0; i<n; i++){
    int v; cin>>v;
    m[v]++;
}

for (int i=1; i<=2000; i++) {
    for (int j=i; j<=2000; j++) {
        if (i==j) {
            f[i+j] += m[i]/2;
        } else {
            f[i+j] += min(m[i], m[j]);
        }
    }
}
sort(f.begin(), f.end());
int ans = 0, a=f[4000];
for (int i=0; i<4001; i++) {
    if (f[i]==a) ans++;
}
cout<<a<<" "<<ans<<endl;
return 0;
}