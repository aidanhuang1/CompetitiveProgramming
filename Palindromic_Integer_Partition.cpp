#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
ll m[64];
int find(int n)  {
    if (m[n]!=0) return m[n];
    if (n<=1) return m[n]=1;
    
    ll r = 1;
    for (int i=1; i<=n/2; i++) {
        r+=find(n-2*i);
    }
    
    return m[n] =r;
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
int n; cin>>n;
cout<<find(n)<<endl;
 
return 0;
}