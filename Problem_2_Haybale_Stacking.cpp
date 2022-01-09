#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
//COMMENT OUT FILE I/O WHEN RUNNING LOCALLY
freopen("stacking.in", "r", stdin);
freopen("stacking.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);


int n, k; cin>>n>>k;
vector<int> arr(n+2);
for (int i=0; i<k; i++) {   
    int a, b; cin>>a>>b;
    arr[a]++; arr[b+1]--;
}
vector<int> pref(n+1);
pref[0] = 0;
for (int i=1; i<=n; i++) {
    pref[i] = pref[i-1]+arr[i];
}
sort(pref.begin(), pref.end());
cout<<pref[n/2-1]<<endl;

return 0;
}