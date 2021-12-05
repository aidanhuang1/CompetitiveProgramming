#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int n, k; vector<int> trees;
int sol(int capacity) {
    vector<int> baskets;
    int ans=0;
    for (auto t: trees) {
        int remaining = t;
        for (int i=0; i<remaining/capacity; i++) {
            baskets.push_back(capacity);
        }
        if (remaining%capacity!=0) baskets.push_back(remaining%capacity);
        
    }
    sort(baskets.begin(), baskets.end(), greater<int>());
    
    baskets.erase(baskets.begin(), baskets.begin()+((k/2)));
    for (int i=0; i<2; i++) { ans+= baskets[i];}
    return ans;
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>n>>k;
int maxn=0, bestans=0;
for (int i=0, x; i<n; i++) {
    cin>>x; trees.push_back(x);
    maxn = max(maxn, x);
}
for (int i=1; i<=maxn; i++) {
    bestans = max(bestans, sol(i));
}
cout<<bestans<<endl;
 
return 0;
}