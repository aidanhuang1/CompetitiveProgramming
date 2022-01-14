#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

ll gcd(ll a, ll b)
{
  if (b == 0) return a;
  return gcd(b, a % b);
}
 
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}


int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, q; cin>>n>>q;
vector<ll> pa(n+1), v(n+1);
pa[0] = 0;
for (int i=1; i<=n; i++) {
    ll a; cin>>a;
    v[i] = a;
    if (i==1) {
        pa[i] = a;
        continue;
    }
    pa[i] = lcm(pa[i-1], a);
}
for (int i=0; i<q; i++) {
    ll a; cin>>a;
    if (a==0) {
        cout<<-1<<"\n"; continue;
    }
    int left = 0, right = n+1, ind = -1;
    while(left<=right) {
        int mid = left+(right-left)/2;
        if (v[mid]>a || pa[mid]%a!=0) {
            right = mid-1;
            ind = mid;
        } else if (pa[mid]%a==0) {
            left = mid+1;
        }
    }
    cout<<ind<<"\n";
}

return 0;
}