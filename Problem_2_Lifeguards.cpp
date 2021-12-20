#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
freopen("lifeguards.in", "r", stdin);
freopen("lifeguards.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
vector<pair<int, int>> lifeguards;
for (int i=0; i<n; i++) {
    int a, b; cin>>a>>b;
    lifeguards.push_back({a,b});
}
int ans = 0;
for (int i=0; i<n; i++) {   
    bool covered[1001]; memset(covered, false, sizeof covered);
    int time = 0;
    for (int j=0; j<n; j++) {
        if (i!=j) {
            for (int k=lifeguards[j].first; k<lifeguards[j].second; k++) {
                if (!covered[k]) {
                    covered[k] = true;
                    time++;
                }
            }
        }
    }
    ans = max(ans, time);
}
cout<<ans<<"\n";

return 0;
}