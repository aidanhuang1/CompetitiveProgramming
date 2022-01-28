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
if (n==2 || n==4 || n==3) {
    cout<<-1<<endl; return 0;
}
if (n==1) {
    cout<<1<<endl; return 0;
}
vector<int> even, odd;
for (int i=1; i<=n; i++) {
    if (i%2==0 && i!=4) even.push_back(i);
    else if (i%2!=0 && i!=5) odd.push_back(i);
}
for (auto i: odd) cout<<i<<" ";
cout<<"5 4 ";
for (int i=0; i<even.size(); i++) {
    cout<<even[i];
    if (i<even.size()-1) cout<<" ";
}
cout<<"\n";



return 0;
}