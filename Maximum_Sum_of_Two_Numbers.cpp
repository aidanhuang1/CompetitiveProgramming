#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
vector<int> v;int n, m, bestans = 0;

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for (int i=0, x; i<n; i++) {
    cin>>x; v.push_back(x);
}
sort(v.begin(), v.end());
for (int i=0; i<n; i++) {
    int left = i, right = n-1;
    while(left <= right) {
        int mid = (left+right)/2;
        if (v[mid]+v[i]>m || mid==i) {
            right = mid-1;
        } else {
            left = mid+1;
            bestans = max(bestans, v[mid]+v[i]);
        }
    }
}
cout<<bestans<<endl;
 
return 0;
}