#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n[6];memset(n, 0, sizeof n);
n[0] = 1;
n[1] = 1;
for (int i=2; i<=5; i++) {
    n[i] = n[i-1]+n[i-2];
}
for (auto i: n)  cout<<i<<endl;
return 0;
}