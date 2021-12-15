#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e6+1;

int parent[MM];

int find(int x) {
    if (parent[x]!=x) {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

void uni(int x, int y) {
    parent[x] = y;
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, m; cin>>n>>m;
for (int i=1; i<=n; i++) {parent[i]=i;}
int cnt = 0;
vector<int> v;
for (int i=1, a, b; i<=m; i++) {
    cin>>a>>b;
    a=find(a), b= find(b);
    if (a!=b) {
        v.push_back(i); uni(a,b);
        cnt++; 
        if (cnt==n-1) {
            for (auto i: v) {
                cout<<i<<"\n";
            }
            return 0;
        }
    }
}
cout<<"Disconnected Graph"<<"\n";
return 0;
}