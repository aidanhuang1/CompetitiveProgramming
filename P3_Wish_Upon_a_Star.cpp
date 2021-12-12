#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 2e5+1;

int n, m;
int parent[MM];
int find(int x) {
    if (parent[x]!=x) {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);
bool mustremove = false;
cin>>n>>m;
for (int i=1; i<=n; i++) {
    parent[i]=i;
}
for (int i=0, a,b; i<m; i++) {
    cin>>a>>b; a = find(a), b = find(b);
    bool x = (a==b); 
    if (mustremove && x) {
        cout<<"NO"<<"\n";
        return 0;
    } else if (!mustremove && x) {
        mustremove = true;
    } else {parent[b]=a;} 
    
}
cout<<"YES"<<"\n";


return 0;
}