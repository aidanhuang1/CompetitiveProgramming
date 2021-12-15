#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e6+1;

int n, m;

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
int parent[n+1], ranks[n+1];
int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(x);
    }
    return parent[x];
}
void uni(int a, int b) {
    a = find(a), b=find(b);
    if (a==b) return;
    if (rank[a]>rank[b]) {
        parent[b] = parent[a];
    } else {
        parent[a] = b;
        if (rank[a]=rank[b]) 
        rank[b]++;
    }
}

for (int i=0, k; i<m; i++) {
    cin>>k; int prev;
    for (int j=0, x; j<k; j++) {
        cin>>x;
        if (j>0) union(prev, x);
        prev = x;
    }
}
vector<int> l;

for (int i=1; i<=n; i++) {
    if (find(i)==1) l.push_back(i);
}

return 0;
}