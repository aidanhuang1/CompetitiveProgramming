#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;
int ans=0;
void fun(vector<int>&a) {
    for (int i=1; i+1<a.size(); i++) {
        int left = a[i]-a[i-1], right = a[i+1]  -a[i];
        ans+=(left*right)-1;
        if (left>1) ans--;
        if (right>1)ans--;
    }
    
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n; string s;
cin>>n>>s;
vector<int> g, h;
g.push_back(0); h.push_back(0);
for (int i=1; i<=n; i++) {
    if (s[i-1]=='G') g.push_back(i);
    if (s[i-1]=='H') h.push_back(i);
}
g.push_back(n+1); g.push_back(n+1);
fun(g); fun(h);
cout<<ans<<endl;

return 0;
}