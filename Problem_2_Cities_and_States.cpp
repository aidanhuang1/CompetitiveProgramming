#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

vector<pair<string, string>> v;

int main() {
freopen("citystate.in", "r", stdin);
freopen("citystate.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
for (int i=0; i<n; ++i) {
    string a, b; cin>>a>>b;
    v.push_back({a, b});
}
int cnt = 0;
for (int i=0; i<n; ++i) {
    for (int j=i+1; j<n; ++j) {
        if (v[i].first[0]==v[j].second[0] && v[i].first[1]==v[j].second[1]) {
            if (v[i].second[0]==v[j].first[0] && v[i].second[1]==v[j].first[1]) {
                cnt++;
            }
        }
    }
}
cout<<cnt<<"\n";

return 0;
}