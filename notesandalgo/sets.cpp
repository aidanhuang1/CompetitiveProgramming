#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

unordered_set<int> s;s.insert(15);
s.insert(10);

cout<<*s.begin()<<endl;
auto x = s.begin();
cout<<x<<endl;
return 0;
}