#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
int t; cin>>t;
for (int i=0, n, k; i<t; i++) {
    cin>>n>>k; int c=0;
    for (int j=0, sum=0, x; j<n; j++) {
        cin>>x; sum+=x;
        if (sum>=k) {
            sum=0; c++;
        }
    }
    cout<<c<<endl;
}

 
return 0;
}