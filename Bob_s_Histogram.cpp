#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
int n;

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n;
vector<int> h(101);
for (int i=0; i<n; i++) { cin>>h[i];}
int ans = 1e5;
for (int y=-100; y<=100; y++) {
    int cost = 0;
    for (int i=0; i<n; i++) {
        cost+=(h[i]-y)*(h[i]-y);
    }
    ans = min(ans, cost);
} cout<<ans<<endl;

return 0;
}