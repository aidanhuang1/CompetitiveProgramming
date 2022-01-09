#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, k; cin>>n>>k;
vector<ll> treats;
for (int i=0; i<n; i++) {ll a; cin>>a; treats.push_back(a);}
ll minimum = INT_MAX;
for (int i=0; i<n-k+1; i++) {
    ll left = treats[i], right = treats[i+k-1];
    if (left>=0 &&right>=0) minimum = min(minimum, abs(right));
    else if (left<0 && right<0) minimum = min(minimum, abs(left));
    else minimum = min(minimum, (min(abs(right), abs(left))*2+max(abs(right), abs(left))));
}
cout<<minimum<<endl;

return 0;
}