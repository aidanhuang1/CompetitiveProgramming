#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

map<string, int> m;

int main() {
//freopen(, , stdin);
//freopen(, , stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
for (int i=0; i<n; i++) {
    string a; int b;
    cin>>a>>b;
    m[a]+=b;
}
vector<pair<int, string>> c;
for (auto i: m) {
    c.push_back({i.second, i.first});
    }
sort(c.begin(), c.end());
for(auto i: c) {
    
}
return 0;
}
