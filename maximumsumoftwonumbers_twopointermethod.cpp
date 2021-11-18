#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, m;
cin>>n>>m;
vector<int> v;
for (int i=0, x; i<n; i++) {
    cin>>x; v.push_back(x);
}
sort(v.begin(), v.end());
int start = 0, end = n-1, bestans = 0;
while(start<end) {
    int sum = v[start]+v[end];
    if (sum>m) {
        end--;
    } else if (sum<=m) {
        bestans = max(bestans, v[start]+v[end]);
        start++;
    }
}cout<<bestans<<endl;
 
return 0;
}