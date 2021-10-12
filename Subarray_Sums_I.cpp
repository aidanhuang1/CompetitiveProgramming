#include <bits/stdc++.h> 
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
 
ll n, x;
cin>>n>>x;
vector<ll> array(n+1), prefixarray(n+1);
for (int i=1; i<=n; i++) {
    cin >> array[i];  
    if (i==1) {
        prefixarray[i] = array[i];
    } else {
        prefixarray[i] =prefixarray[i-1]+array[i];
    }
}

ll p1 = 0, p2 = 1, count = 0, tempsum = 0;
while(p1<n) {
    tempsum = prefixarray[p2]-prefixarray[p1];
    if (tempsum==x) {
        count++;
        p2++;
    } else if (tempsum<x) {
        p2++;
    } else if (tempsum>x) {
        p1++;
    }
}
cout << count << endl;


return 0;
}
