#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

struct data {
    int count;
};

bool cmp()
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
for (int i=0, m, k; i<n; i++) {
    cin>>m>>k;
    map<string, int> list;
    for (int i=0; i<m; i++) {
        string x; cin>>x;
        list[x]++;

    }

    //use custom comparator to sort by value for the map
    cout<<list["brown"]<<endl;
}

 
return 0;
}