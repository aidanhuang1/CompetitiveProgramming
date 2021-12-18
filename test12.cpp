#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

map<string, int> m = {{"abc", 1}, {"cbd", 2}};
for (auto i: m) {
    cout<<i.first<<i.second<<endl;
}

return 0;
}