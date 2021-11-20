#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
int n, avg, ans=1e5; 
vector<int> nums(101);

int bs(int q) {
    int total=0;
    for (int i=0; i<n; i++) {
    total+=(pow(abs(nums[i]-q), 2));
    }
    return total;
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n;
for (int i=0; i<n; i++) {
    cin>>nums[i];
    avg+=nums[i];
}
int left=0, right=1e4;
while(left<=right) {
    int mid = (left+right)/2;
    int q = bs(mid);
    int l = bs(mid-1),r=bs(mid+1);
    ans = min(ans, q);
    if (l<q && q<r) {
        right = mid-1;
    } else if (l>q && q>r) {
        left = mid+1;
    } else if (l>=q && q<=r) {
        break;
    }
}
cout<<ans<<endl;
return 0;
}