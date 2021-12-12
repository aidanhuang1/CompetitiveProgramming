#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
int parent[100001], srank[100001];
int find(int x) {
    if (parent[x]!=x) {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

void uni(int x, int y)  {
    int xs = find(x), xy = find(y);
    if (xs==xy) return;
    if (srank[xs]<srank[xy]) {
        parent[xs] = xy;
    } else if (srank[xy]<srank[xs]) {
        parent[xy] = xs;
    } else {
        parent[xy] = xs;
        srank[xs]++;
    }
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, q;
cin>>n>>q;
for (int i=1; i<=100000; i++) { //makeset
    parent[i]=i;
}
for (int i=0; i<q; i++) {
    char x; int a, b;
    cin>>x>>a>>b;
    if (x=='A') {
        uni(a,b);
    } else if (x=='Q') {
        int t1 = find(a), t2 = find(b);
        if (t1==t2) cout<<"Y"<<endl; else cout<<"N"<<endl;
    }
}
 
return 0;
}