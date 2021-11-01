#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
int max = (int)1e5;
bool f[max];
ll psa[max];
for (int i=2; i<max; i++) {
    psa[i] = psa[i-1];
    if (!f[i]) {
        psa[i]+=i;
        for (int j=2*i; j<=max; j+=i) { //your choosing multiple of i and making f[j] true (which are primes)
            f[j] = true;
        }
    }
}
int q; cin>>q;
for (int i=q; q>0; q--) {
    int a, b;
    cin>>a>>b;
    cout<<psa[b]-psa[a-1]<<endl;
}
 
return 0;
}