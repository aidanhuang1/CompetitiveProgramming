#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int m, n; cin>>m>>n;
string x; cin>>x;
vector<ll> a(m);
for (int i=0; i<n; i++) {
    cin>>a[i];
}

int maxval = 0, maxvalpos = 0, pointer = 0;
for (int i=0; i<m; i++) {
    if (x[i]=='0') {
        if (a[pointer]>=maxval) {
            maxvalpos = i;
            maxval = a[pointer];
        }
        pointer++;
    }
}
for (int i=maxvalpos; i<m; i++) {
    if (x[i]!='0') cout<<x[i];
}
for (int i=0; i<maxvalpos; i++) {
    if (x[i]!='0') cout<<x[i];
}
cout<<endl;
return 0;
}