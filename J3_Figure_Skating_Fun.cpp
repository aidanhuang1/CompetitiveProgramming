#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;
typedef pair<ll, pii> piii;
const ll INF = 0x3F3F3F3F;
const ll MOD = 1e9+7;
const ll MM = 1e6+1;

ll n; 
vector<ll> pref;

ll check(ll mid) {
    if (pref[n]-pref[mid]==pref[mid]) return 1;
    else if (pref[n]-pref[mid]>pref[mid]) return 2; //move mid to the right
    else return 3;
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n;
pref.resize(n+1);
pref[0] = 0;
for (ll i=1; i<=n; i++) {
    ll x; cin>>x;
    pref[i] = pref[i-1]+x;
}
ll left = 0, right = n;
while(left<right) {
    ll mid = left+(right-left)/2;
    ll m = check(mid);
    if (m==1) {
        cout<<mid<<endl;
        return 0;
    } else if (m==2) {
        left = mid+1;
    } else {
        right = mid-1;
    }
}
cout<<"Andrew is sad."<<"\n";
return 0;
}