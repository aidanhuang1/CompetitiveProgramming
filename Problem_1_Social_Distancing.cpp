#include <bits/stdc++.h> 
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
 
ll n, m;
cin >>n>>m;
vector<pair<ll, ll>> grass(m);
for (int i=0; i<m; i++) {
    cin >> grass[i].first >> grass[i].second;   
}
sort(grass.begin(), grass.end());

ll left = 0, right = 1e18;
while (left <= right) {
    ll mid = (left+right)/2;
    
    ll pos = grass[]
}
return 0;
}