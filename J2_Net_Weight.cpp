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
vector<int> v;
for (int i=0, x; i<n; i++) {
    cin>>x;
    if (x<=100) v.push_back(x);
}
sort(v.rbegin(), v.rend());
if (v.size()==1) cout<<v[0]<<endl;
else if (v.size()==0) cout<<0<<endl;
else cout<<v[0]+v[1]<<endl;

return 0;
}