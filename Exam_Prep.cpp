#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define int long long
#define MOD 1000000007
using namespace std;
typedef long long ll;

int n, q, a, b, x;
ll parent[1000001], resourcefulness[1000001], sizedsu[1000001]; 
int find(int x) {
    if (parent[x]!=x) {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

void uni(int x, int y)  {
    int xs = find(x), xy = find(y);
    if (xs != xy){
    
        if (sizedsu[xs]>=sizedsu[xy]) {
            parent[xy] = xs;
            resourcefulness[xs]+=resourcefulness[xy];
            sizedsu[xs]+=sizedsu[xy];
        } else {
            parent[xs] = xy;
            resourcefulness[xy]+=resourcefulness[xs];
            sizedsu[xy]+=sizedsu[xs];
        }
    }
}
 
signed main() {
ios::sync_with_stdio(0);
cin.tie(0);

cin>>n>>q;
for (int i=1; i<=n; i++) {
    cin>>resourcefulness[i];
    sizedsu[i]=1;
    parent[i] = i;
}
sizedsu[0] = 1;
for (int i=0; i<q; i++) {
    cin>>x;
    if (x==1) { //union
        cin>>a>>b;
        uni(a, b);
    } else if (x==2) {
        cin>>a;
        cout<<sizedsu[find(a)]<<"\n";
    } else {
        cin>>a;
        cout<<resourcefulness[find(a)]<<"\n";
    }
}

return 0;
}