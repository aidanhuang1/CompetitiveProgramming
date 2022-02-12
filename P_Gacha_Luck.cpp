#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, k; cin>>n>>k;
string s; cin>>s;

vector<double> scorelist;
double temp = 0;
for (int i=0; i<n; i++) {
    if (s[i]=='1') {
        scorelist.push_back(temp);
        temp = 0;
    } else {
        temp++;
    }
}
scorelist.push_back(temp);
sort(scorelist.rbegin(), scorelist.rend());
int bestans = 0;
// for (auto i: scorelist) {

// }
cout<<scorelist[0]<<endl;

// double a = 11;
// int b = 5;
// cout<<ceil(a/b)<<endl;
return 0;
}