#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

vector<int> adj[(int)1e5]; 
map<string, int> m1; map<int, string> m2;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int m, n;
for (int i=0; i<m; i++) {
    string a, b;
    cin>>a>>b;
    m1.insert(a, b); m2.insert(b, a);
}
 
return 0;
}