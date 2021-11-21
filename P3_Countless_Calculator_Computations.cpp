#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int q;cin>>q;
for (int i=0, y, z; i<q; i++) {
    cin>>y>>z;
    double left = 0, right = 10, bestans = 1e3;
    while(left<=right) {
        double mid = (left+right)/2;
        for (int i=0; i<y; i++) {
            mid=pow(mid,mid);
            cout<<mid<<endl;
        }
        double diff = abs(z-mid);
        if (diff<=bestans) {
            left = right+1;
        } else if (diff<bestans) {
            right = left-1;
        }
        bestans = min(bestans, diff);

    }
    cout<<bestans<<endl;
}

 
return 0;
}