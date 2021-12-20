#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;
ll n, b; 
vector<pair<ll, ll>> cows;

int main() {
freopen("balancing.in", "r", stdin);
freopen("balancing.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>b;
ll maxx=0, maxy=0;
for (int i=0; i<n; i++) {
    ll x, y; cin>>x>>y;
    cows.push_back({x, y});
    maxx=max(maxx,x); maxy=max(maxy,y);
}
ll m=(int)1e9;
for (ll i=0; i<=maxx+1; i+=2) { //x
    for (ll j=0; j<=maxy+1; j+=2) { //y
        ll q1=0,q2=0,q3=0,q4=0;
        for (auto c: cows) {
            if (c.first>i && c.second<j) q1++;
            if (c.first<i && c.second<j) q2++;
            if (c.first<i && c.second>j) q3++;
            if (c.first>i && c.second>j) q4++;
        }
        m = min(m, max(q1, max(q2, max(q3, q4))));
    }
}
cout<<m<<"\n";


return 0;
}