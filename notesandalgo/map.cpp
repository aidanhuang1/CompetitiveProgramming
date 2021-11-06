#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

unordered_map<string,int>m;
m["test"]=1;

vector<unordered_map<string, int>> v(100);
v[0].insert(make_pair("Node", 0));
cout<<v[0]<<endl;

return 0;
}