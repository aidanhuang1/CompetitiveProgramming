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
cin>>n;
for (int i=0, a, b, c; i<n; i++) {
    cin>>a>>b>>c;
    if (((a*1)+(b*2)+(c*3)%2!=0) || a<c || (b%2!=0 && a==0)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
 
return 0;
}