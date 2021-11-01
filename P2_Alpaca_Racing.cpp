#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
int n, d, k, x, p, used=0;
vector<int> alpacas;

void check() {
    
    sort(alpacas.begin(), alpacas.end());
    if (used>=k || d/k<(alpacas[sizeof(alpacas)-1]/k)) return;
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>d>>k>>x;

for (int i=0; i<n-1; i++) {
    cin>>alpacas[i];
}
cin>>p;


return 0;
}