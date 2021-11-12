#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
int ar[1001];

for (int i=0; i<10; i++) {
    int n, m, d;cin>>n>>m>>d;
    memset(ar, 0, sizeof ar);
    for (int j=0, x; j<m; j++) {
        cin>>x;
        ar[x]++;
    }
    int count = 0, num=n, used=0;
    for (int j=1; j<=d; j++) {
        if (used==num) {
            used = 0;
            count++;
        }
        num+=ar[j]; used++;
    }
    cout<<count<<endl;
}
 
return 0;
}