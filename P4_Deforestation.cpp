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
int prefix[n+1];    
for (int i=0; i<n; i++) {
    int number; cin>>number;
    if (i==0) {
        prefix[i] = number;
    } else {
        prefix[i] = prefix[i-1]+number;
    }
}

int queries; cin>>queries;
for (int i=0; i<queries; i++) {
    int x, y;
    cin>>x>>y;
    if (x==0){
        cout<<prefix[y]<<endl;
    } else {
    cout<<prefix[y]-prefix[x-1]<<endl;
    }
}


 
return 0;
}