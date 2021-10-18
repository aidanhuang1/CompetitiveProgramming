#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int s, r;
cin>>s>>r;
s=pow(s, 2);
r=3.14*pow(r,2);
cout << (s>r ? "SQUARE" : "CIRCLE") << endl;
 
return 0;
}