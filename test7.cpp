#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

map<string, vector<string>> m;
m.insert({"a1", {"a2"}});
cout<<m["a1"][0]<<endl;
for (string i: m["a1"]) {
    cout<<i<<endl;
}
 
return 0;
}