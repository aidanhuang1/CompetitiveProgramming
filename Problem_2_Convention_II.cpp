#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
//freopen(, , stdin);
//freopen(, , stdout);
cin.sync_with_stdio(0);
cin.tie(0);

vector<pair<int, pair<int, int>>> v;

int n; cin>>n;
for (int i=0; i<n; i++) {
    int a, b;
    cin>>a>>b;
    v.push_back({i, {a, b}});
}
sort(v.begin(), v.end(), [](const pair<int, pair<int, int>>& a, const pair<int, pair<int, int>>& b) {return a.second.first<b.second.first;});
set<pair<int, pair<int, int>>> s;
int ans = 0, curcow =0, time = 0;

while(curcow<n || s.size()>0) {
    if (v[curcow].second.first<=time && curcow<n) {
        s.insert(v[curcow]);
        curcow++;
    } else if (s.size()==0) {
        time = v[curcow].second.first+v[curcow].second.second;
        curcow++;
    } else if (s.size()>0) {
        pair<int, pair<int, int>> cur = *s.begin();
        ans = max(ans, time-cur.second.first);
        s.erase(s.begin());
        time+=cur.second.second;
    }
}
cout<<ans<<"\n";
return 0;
}