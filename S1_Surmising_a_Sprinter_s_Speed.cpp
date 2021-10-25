#include <bits/stdc++.h> 
#include <iostream>
#define pb push_back
#define mp make_pair
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

ll n;
cin>>n;
vector<pair<double, double>> measurements;
for (int i=0; i<n; i++) {
    ll x, y;
    cin>>x>>y;
    measurements.push_back({x,y});
}
sort(measurements.begin(), measurements.end());
double maxnum = 0;
for (int i=1; i<n; i++) {
    maxnum = max(maxnum, (abs(measurements[i].second-measurements[i-1].second))/abs((measurements[i].first-measurements[i-1].first)));
}
cout << fixed << setprecision(1) << maxnum << endl;
return 0;
}