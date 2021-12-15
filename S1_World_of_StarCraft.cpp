#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int n, m, k; string r;
int parent[MM], ranks[MM];
int find(int x) {
    if (parent[x]!=x) {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

void Union(int a, int b) {
    a = find(a);b = find(b);
    if (a==b || r[a-1]!=r[b-1]) {
        return;
    }
    if (ranks[a] < ranks[b]) {
        parent[a] = b;
    } else {
        parent[b] = a;
        if (ranks[a] == ranks[b]) {
            ranks[a]++;
        }
    }
    return;
}


int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>m>>k;
cin>>r;
for (int i=1; i<=n; i++) {
    parent[i]=i;
    ranks[i]=0;
}
for (int i=0, a, b; i<m; i++) {
    cin>>a>>b;
    Union(a,b);
}
int cnt =0;
for (int i=0, a, b; i<k; i++) {
    cin>>a>>b; if (find(a)==find(b)) cnt++;
}
cout<<cnt<<"\n";
return 0;
}