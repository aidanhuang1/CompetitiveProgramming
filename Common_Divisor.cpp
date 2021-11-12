#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

ll a, b, k;
cin>>a>>b>>k;
vector<ll> v;
ll g = __gcd(a,b);
for (int i=1; i<=sqrt(g); i++) {
    if (a%i==0 && b%i==0) {
        v.push_back(i);
        if (i!=g/i) v.push_back(g/i);
    }
}
sort(v.begin(), v.end(), greater<ll>());
if (v.size()==0) cout<<-1<<endl; else
cout<<v[k-1]<<endl;

 
return 0;
}