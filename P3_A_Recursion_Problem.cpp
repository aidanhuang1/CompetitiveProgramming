#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
int ans;
string n, temp; getline(cin, n);
for (auto i: n) {
    if ((i>='0' && i<='9')||i=='-') {
        temp+=i;
    }
}
for(auto i: temp) {
    ans+=i;
}cout<<ans<<endl;
 
return 0;
}