#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

string s;
getline(cin, s);
int lower = 0, upper = 0;
for (int i=0; i<s.length(); i++) {
    if (islower(s[i])) lower++;
    if (isupper(s[i])) upper++;
}
cout<<((upper==lower)?"YES":"NO")<<"\n";

return 0;
}