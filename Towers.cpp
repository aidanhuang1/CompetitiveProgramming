#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n; 
cin>>n;
vector<ll> towers;
for (int i=0; i<n; i++) {
    ll j; cin>>j;
    towers.push_back(j);
}
int count = 0;
if (towers.size()<=2) {
    cout<<0<<endl;
} else {
    for (int i=1; i<towers.size()-1; i++) {
        if (towers[i]>towers[i-1] && towers[i]<towers[i+1]) count++;
    }
    cout<<count;
}

return 0;
}