#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;
int n;
vector<int> v;
void s(int pos) {
    //right side
    int range = 1, cnt = 1;
    while (pos<n-1) {
        if ((v[pos]+range)>=v[pos+1]) {//next cow is in range
            cnt++;
            range++;
            pos++;
        } else {
            break;                              
        }
    }
    cout<<cnt<<endl;
}

int main() {
//freopen(, , stdin);
//freopen(, , stdout);
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n;

for (int i=0; i<n; i++) {
    int a; cin>>a; v.push_back(a);
}
sort(v.begin(), v.end());
for (int i=0; i<n; i++) {
    s(i);
}

return 0;
}