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
vector<int> v(n);
for (int i=0, x; i<n; i++) {
    cin>>v[i];
}
int in = v[0];
int out = 0;
int out_temp;
for (int i=0; i<n; i++) {
    out_temp = (in>out)?in:out;
    if (in>out){out_temp=in;} else out_temp=out;
    in = out+v[i];
    out = out_temp;
}
if (in>out) cout<<in<<endl; else cout<<out<<endl;



return 0;
}