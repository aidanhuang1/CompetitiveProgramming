#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

ll n, m;
vector<pair<ll, ll>> grass;

bool s(ll mindistanceapart) {
    int count = 1;
		int intervalCount = 0;
		long long current = grass[0].first;

		// try to fit the next cow into the earliest patch of grass that's available
		while ((current + mindistanceapart) < grass[m - 1].second) {
			while (current + mindistanceapart > grass[intervalCount].second) {
				intervalCount++;
			}
			current = max(grass[intervalCount].first, current + mindistanceapart);
			count++;
			if (count == n) break;
		}
    if (count>=n) return true;
    return false;
}

int main() {
freopen("socdist.in", "r", stdin);
freopen("socdist.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for (int i=0; i<m; i++) {
    ll a, b;
    cin>>a>>b;
    grass.push_back({a,b});
}
sort(grass.begin(), grass.end());
ll left = 0, right=grass[m-1].second-grass[0].first+1;
while(left<right) {
    ll mid = left+(right-left+1)/2;
    bool result = s(mid);
    if (result) {
        left = mid;
    } else {
        right = mid-1;  
    }
}
cout<<left<<endl;
return 0;
}