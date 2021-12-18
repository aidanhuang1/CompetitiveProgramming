#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int main() {
freopen("citystate.in", "r", stdin);
freopen("citystate.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
map<string, int> m;
int total =0;
for (int i=0; i<n; i++) {
    string a, b; cin>>a>>b;
    a = a.substr(0, 2);
    
    if(a!=b)total+= m[a+b];
    m[b+a]++;
}
cout<<total<<"\n";

return 0;
}