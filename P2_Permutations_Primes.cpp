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

int n; cin>>n;
switch (n) {
    case 1:
        cout<<1<<"\n";
        return 0;
    case 2:
        cout<<-1<<"\n";
        return 0;
    case 3:
        cout<<1<<" "<<3<<" "<<2<<"\n";
        return 0;
}
cout<<1<<" "<<3<<" "<<2<<" ";
for (int i=4; i<=n; i++) {
    cout<<i;
    if (i<n) cout<<" ";
}
cout<<endl;

return 0;
}