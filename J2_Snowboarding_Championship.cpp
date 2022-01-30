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

ll n, a, b; cin>>n>>a>>b;
ll andrew = 0, tommy = 0;
for (int i=0; i<n; i++) {
    int x, y; cin>>x>>y;
    if (a>x) andrew++; else andrew+=2;
    if (b>y) tommy++; else tommy+=2;
}
if (andrew==tommy) cout<<"Tie!"<<"\n"; 
else if (andrew>tommy) cout<<"Tommy Wins!"<<"\n";
else cout<<"Andrew Wins!"<<"\n";

return 0;
}