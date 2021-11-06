#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);


vector<map<string, int>> v(100);
v[0].insert(make_pair("Node", 0));
v[0].insert(make_pair("d", 0));
for (auto i: v[0]) {
    cout<<i.first<<endl;
}
map<string, int> v1;
map<int, string> v2;
v1.insert({"hello", 1});
v2.insert({1, "hello"});
cout<<v2[v1["hello"]]<<endl;


return 0;
}