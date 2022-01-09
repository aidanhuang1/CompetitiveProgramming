#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

struct range{
    ll l, r;
};

vector<range> mountains;

int main() {
freopen("mountains.in", "r", stdin);
freopen("mountains.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
for (int i=0; i<n; i++) {
    ll a, b; cin>>a>>b;
    mountains.push_back({a-b, a+b});
}
sort(mountains.begin(), mountains.end(), [](const range& a, const range& b) {if (a.l==b.l) return a.r > b.r; return a.l < b.l;});
ll cnt = 0;
ll pnt = -1;
for (auto i: mountains) {
    if (i.r>pnt) {  
        cnt++;
        pnt = i.r;
    }
}
cout<<cnt<<"\n";

return 0;
}