#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, sum = 0, maxn = 0;
cin>>n;
for(int i=0; i<n; i++) {
    int a;
    cin>>a;
    maxn=max(maxn, a);
    sum+=a;
}
int x = sum-maxn;
int y = sum/2;
cout<<min(x,y)<<endl;
 
return 0;
}