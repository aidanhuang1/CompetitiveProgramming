#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

map<string, int> m;
vector<pair<int, string>> v;
int main() {
freopen("notlast.in", "r", stdin);
freopen("notlast.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
for (int i=0; i<n; i++) {
    string a; int b;
    cin>>a>>b;
    m[a]+=b;
}
for (int i=0; i<m.size()-7; i++) {
    v.push_back({0, "Missing"});
}
for (auto i: m) {
    v.push_back({i.second, i.first});
}
sort(v.begin(), v.end());

//if all are the same
bool same = true;
for (int i=0; i<6; i++) {
    if (v[i].first!=v[i+1].first) {
        same = false;
    }
}
if (same) {
    cout<<"Tie"<<"\n"; return 0;
}

int point = 0, count = 0;
while(v[point].first==v[0].first && point<7) {
    point++;
}
if (point==6) {
    cout<<v[6].second<<"\n";
    return 0;
}

int cur = v[point].first;
while(v[point].first==cur && point<7) {
    count++;
    point++;
    
}if (count>1) {
        cout<<"Tie"<<"\n";
    } else if (count==1) {
        cout<<v[point-1].second<<"\n";
    }

return 0;
}