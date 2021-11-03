#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
const int max = 1e5;
bool prime[max+1];ll psa[max+1];

for (int i=2; i<=max; i++) {
    psa[i] = psa[i-1];
    if (!prime[i]) {
        psa[i]+=i;
        for (int j=i; j<=max; j+=i) {
            prime[j] = true;
        }
    }
}   
int q;cin>>q;cin.ignore();
for (; q>0; q--) {
    int a, b;
    cin>>a>>b;
    cout<<psa[b]-psa[a-1]<<endl;
}
 
return 0;
}