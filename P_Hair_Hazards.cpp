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

int h, s, q; cin>>h>>s>>q;
for (int i=0; i<q; i++) {
    h-=s;
    cout<<h<<"\n";
}

return 0;
}