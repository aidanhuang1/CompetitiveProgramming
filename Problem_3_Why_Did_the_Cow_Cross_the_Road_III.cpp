#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
freopen("cowqueue.in", "r", stdin);
freopen("cowqueue.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);
vector<pair<int, int>> v;
int n; cin>>n;
for (int i=0; i<n; i++) {
    int a, b; cin>>a>>b;
    v.push_back({a,b});
}
sort(v.begin(), v.end());
int time = 0;
for (auto i: v) {
    if (time >= i.first) {
        time+=i.second;
    } else {
        time = i.first+i.second;
    }

}
cout<<time<<"\n";
return 0;
}