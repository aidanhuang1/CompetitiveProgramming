#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

ll arrsize;
ll check(ll *array, ll largest) {
    ll tempnum = 0;
    ll cnt = 1;
    for (ll i=0; i<arrsize; i++) {
        if (tempnum+array[i]>largest) {
            cnt++;
            tempnum = array[i];
        } else {
            tempnum+=array[i];
        }
    }
    return cnt;
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
ll n, m, sum=0, minn=0; cin>>n>>m;
arrsize = n;
ll array[n];
for (ll i=0; i<n; i++) {
    cin>>array[i]; sum+=array[i];
    minn = max(minn, array[i]);
}
ll left = minn, right = sum, ans;
while(left<right) {
    ll mid = (left+right)/2;
    ll subarrs = check(array, mid);
    if (subarrs>m) {
        left=mid+1;
    } else {
        right=mid;
    }
}
cout<<left<<endl;

 
return 0;
}