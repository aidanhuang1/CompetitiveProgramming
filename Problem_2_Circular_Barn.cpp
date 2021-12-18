#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int n;

int main() {
freopen("cbarn.in", "r", stdin);
freopen("cbarn.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n; vector<int>cows(n);
for (int i=0; i<n; i++) {
    cin>>cows[i];
}
int maxn = (int)1e9;
for (int i=0; i<n; i++) {
    int ttl = 0;
    for (int j=0; j<n; j++) {
        int temp = i+j;
        temp = temp%n;
        ttl+=cows[temp]*j;
    }
    maxn= min(maxn, ttl);
}
cout<<maxn<<"\n";


return 0;
}