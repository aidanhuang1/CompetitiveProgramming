#include <bits/stdc++.h> 
#include <iostream>
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

ll n, q;
cin>>n>>q;
vector<ll> haybales;
for (int i=0; i<n; i++) {
    ll temp;
    cin>>temp;
    haybales.push_back(temp);
}
sort(haybales.begin(), haybales.end());


for (int i=0; i<q; i++) {
    ll a, b;
    cin >> a>>b;
    cout << upper_bound(haybales.begin(), haybales.end(), b)- lower_bound(haybales.begin(), haybales.end(), a)<<endl;
}
return 0;
}