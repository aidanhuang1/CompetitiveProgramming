#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
freopen("circlecross.in", "r", stdin);
freopen("circlecross.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int cnt = 0;
string a; cin>>a;
int start[52], end[52];
memset(start, -1, sizeof start); memset(end, -1, sizeof end);
for (int i=0; i<52; i++) {
    if (start[a[i]-'A']==-1) {
        start[a[i]-'A'] = i;
    } else {
        end[a[i]-'A']=i;
    }
}
for (int i=0; i<52; i++) {
    for (int j=0; j<52; j++) {
        if (start[i]<start[j] && end[i]<end[j] && start[j]<end[i]) {
            cnt++;
        }
    }
}
cout<<cnt<<"\n";
return 0;
}