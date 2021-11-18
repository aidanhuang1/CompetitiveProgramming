#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef unsigned long long ull;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
 
ull n, ans; cin>>n;
for (ull i=1; i<=n; i*=100) {
    if(i*10>=n) ans+=n-i+1;
    else ans+=9*i;
}
cout<<ans<<endl;
return 0;
}