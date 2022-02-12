#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e6+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int d; cin>>d;
vector<int> x(d);
string s; cin>>s;
for (int i=0; i<d; i++) {
    x[i] = s[i]-48;
}
for (int i=0; i<d-1; i++) {
    if (x[i+1]>x[i]) { //if the next adjacent number is greater than current number
        char temp = x[i];
        x[i] = x[i+1];
        x[i+1] = temp;
        break;
    }
}
for(auto i: x) cout<<i;
cout<<"\n";

return 0;
}