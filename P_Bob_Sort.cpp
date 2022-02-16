#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0); 

int n; cin>>n;
vector<ll> v(n);
ll rounds = 0;
for (int i=0; i<n; i++) {
    cin>>v[i];
    rounds = max(rounds, v[i]);
}
rounds = log10(rounds)+1;
for (int i=1; i<=rounds; i++) {
    sort(v.begin(), v.end(), [=](const int& x, const int& y) {int e = pow(10, i); return x%e<y%e;});
    for (int i=0; i<n; i++) {
        cout<<v[i];
        if (i<n-1) cout<<" ";
    }
    cout<<endl;
}

return 0;
} 