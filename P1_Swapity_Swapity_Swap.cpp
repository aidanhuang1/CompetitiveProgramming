#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int n, m, k; vector<pair<int, int>> steps; vector<int> cows;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>n>>m>>k;
for (int i=1; i<=n; i++) cows.push_back(i);
for (int i=0, l, r; i<m; i++) {
    cin>>l>>r; steps.push_back({l,r});
}
for (int i=0; i<10; i++) {
    for (auto j: steps) {
        reverse(cows.begin()+j.first-1, cows.begin()+j.second-1);for (auto i: cows) cout<<i<<" "; cout<<endl;
    }
}

 
return 0;
}