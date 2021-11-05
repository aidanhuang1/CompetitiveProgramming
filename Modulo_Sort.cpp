#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, mod;
cin>>n>>mod;
vector<int> v[mod];
for (int i=0, x; i<n; i++) {
    cin>>x;
    v[x%mod].push_back(x);
}
for (int i=0; i<mod; i++) {
    sort(v[i].begin(), v[i].end());
    for (auto j: v[i]) {
        cout<<j<<" ";
    }
}
cout<<endl;


return 0;
}