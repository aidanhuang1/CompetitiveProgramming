#include <bits/stdc++.h> 
#include <iostream>
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
ll k, m;
cin >> k >> m;
vector<ll> nums;
for (int i=0; i<k; i++) {
    nums.push_back(i+1);
}
while(m--) {
    ll r;
    cin>>r;
    vector<ll> newnums;
    for (int i=0; i<nums.size(); i++) {
        if ((i+1)%r!=0) {
            newnums.push_back(nums[i]);
        }
    }   
    nums = newnums;
}
for (ll i: nums) {
    cout << i<< endl;
}

 
return 0;
}