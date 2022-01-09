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

int n, k, maxberries=0; cin>>n>>k;
vector<int> berries(n);
for (int i=0; i<n; i++) {
    cin>>berries[i];
    maxberries = max(maxberries, berries[i]);
}
sort(berries.rbegin(), berries.rend());
for (int i=1; i<=maxberries; i++) {
    int currentindex = 0;
    vector<int> temp = berries; //copy vector
    set<int> baskets;
    
    cout<<*baskets.begin()<<endl;
}

return 0;
}