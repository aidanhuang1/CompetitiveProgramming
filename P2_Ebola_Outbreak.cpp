#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int n, m;int parent[MM], ranks[MM];
int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(x);
    }
    return parent[x];
}
void uni(int a, int b) {
    // cout<<a<<" "<<b<<endl;
    a = find(a), b=find(b);
    
    if (a==b) return;
    if (ranks[b]>ranks[a]) {
        parent[a] = b;
    } else {
        parent[b] = a;
        if (ranks[b]==ranks[a]) 
        ranks[a]++;
    }
}
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;

for (int i=1; i<=n; i++) {
    parent[i]=i;ranks[i]=0;
}

for (int i=0, k; i<m; i++) {
    cin>>k; int prev;
    for (int j=0, x; j<k; j++) {
        cin>>x;
        if (j>0) {
            cout<<prev<<" "<<x;
            uni(prev, x);
        }
        prev = x;
    }
    
}
vector<int> l;
for (int i=1; i<=n; i++) {
    if (find(i)==find(1)) l.push_back(i);
}
cout<<l.size()<<"\n";
for (auto i: l) cout<<i<<" ";
cout<<"\n";

return 0;
}