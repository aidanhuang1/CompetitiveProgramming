#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
ll mx;
 ll f(ll n) {
    if (n>mx) return 0;
    return f(10*n+2) + 1+f(10*n+3);
}
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>mx;

cout<<f(0)-1<<endl;
 
return 0;
}