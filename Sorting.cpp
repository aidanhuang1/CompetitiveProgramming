#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n;cin>>n;vector<int> nums(n);
for (int i=0; i<n; i++){
    cin>>nums[i];
}
sort(nums.begin(), nums.end());
for (auto i: nums) {
    cout<<i<<endl;
}
 
return 0;
}