#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
vector<pair<int, int>> grass;
int n, m;
bool check(int dist) {
    int pos = 0, cnt = 0;
    int curintv = grass[0].first;
    for (int i=1; i<n; i++) {
        while(pos > grass[curintv].second && curintv < m) {
            curintv++;
        }
        if (grass[curintv].first<=pos && grass[curintv].second>=pos) {
            cnt++;
            pos+=dist;
        }
    }
    if (cnt==n) return true;
    else return false;
}


int main() {
cin.sync_with_stdio(0);
cin.tie(0);
 
cin>>n>>m;
for (int i=0, a, b; i<m; i++) {
    cin>>a>>b;
    grass.push_back({a,b});
}
sort(grass.begin(), grass.end());

ll left = 0, right = 1e18;
while(left<right) {
    ll mid = (left+right)/2;
    if (check(mid)) {
        left = mid;
    } else {
        right = mid;
    }
} 
cout<<left<<endl;

return 0;
}