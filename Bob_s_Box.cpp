#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, a, b, total=0;
cin >>n>>a>>b;
for (int i=1; i<=n; i+=2) {
    total+=a;
}
for (int i=2; i<=n; i+=2)  {
    total+=b;
}
cout<<total<<endl;
return 0;
}