#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

vector<pair<string, pair<int,int>>> v;   

int main() {
freopen("traffic.in", "r", stdin);
freopen("traffic.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
for (int i=0; i<n; ++i) {
    string a; int b, c; cin>>a>>b>>c;
    v.push_back({a,{b,c}});
}

//part start
int left = -99999999, right = 99999999;
for (int j=n-1; j>=0; --j) {
    auto i = v[j];
    if (i.first=="on") {
        left-=i.second.second;   
        right-=i.second.first;
        left = max(0, left);
    } else if (i.first=="off") {
        left+=i.second.first;
        right+=i.second.second;
    } else if (i.first=="none") {
        left = max(left, i.second.first);
        right = min(right, i.second.second);
    }
}
cout<<left<<" "<<right<<"\n";

//part end
left = -99999999, right=99999999;
for (auto i: v) {
    if (i.first=="on") {
        left+=i.second.first;
        right+=i.second.second;
    } else if (i.first=="off") {
        left-=i.second.second;
        right-=i.second.first;
        left = max(0, left);
    } else if (i.first=="none") {
        left = max(left, i.second.first);
        right = min(right, i.second.second);
    }
}
cout<<left<<" "<<right<<"\n";


return 0;
}