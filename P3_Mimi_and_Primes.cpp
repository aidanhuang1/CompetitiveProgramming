#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n;
ll g= 0, ans=0, x=0;
cin>>n;
for (int i=0; i<n; i++) {
    cin >> x;
    g = __gcd(g, x);
}
if (g<=1) {
    cout << "DNE"<<endl; return 0;
}

for (ll i=2; i*i<=g; i++) {
    while(g%i==0) { //g divisible by i
        ans = max(ans, i);
        g/=i;
    }
}
ans = max(ans, g);cout<<ans<<endl;

 
return 0;
}