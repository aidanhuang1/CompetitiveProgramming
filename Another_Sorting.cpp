#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
vector<int> v[10];
for (int i=0, x; i<n; i++) {
    cin>>x;
    v[x%10].push_back(x);
} 
for (int i=0; i<10; i++) {
    sort(v[i].begin(), v[i].end(), greater<int>());
    for (auto j: v[i]) {
        cout<<j<<" ";
    }
}
cout<<endl;

return 0;
}