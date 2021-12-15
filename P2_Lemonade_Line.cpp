#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e6+1;

int n; vector<int> cows;

int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>n;
for (int i=0, x; i<n; i++) {
    cin>>x;cows.push_back(x);
}
sort(cows.begin(), cows.end(), greater<int>());
int sz = 0;
for (auto i: cows) {
    if (i>=sz) sz++;
    else break;
}
cout<<sz<<"\n";



return 0;
}