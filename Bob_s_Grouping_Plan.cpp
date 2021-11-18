#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, m=1; cin>>n;
while(m*(m-1)<2*n) {
    m++;
}
if (m*(m-1)!=2*n) {
    cout<<"No"<<endl;
} else {
    cout<<"Yes\n"<<m<<endl;
    vector<int> adj[m+1];
    int edge=0;
    for (int i=1; i<=m; i++) {
        for (int j=i+1; j<=m; j++) {
            edge++;
            adj[i].push_back(edge);
            adj[j].push_back(edge);
        }
    }
    for (int i=1; i<=m; i++) {
        cout<<m-1<<" ";
        for (int x: adj[i]) { cout << x << " "; }
        cout<<endl;
    }
}

 
return 0;
}