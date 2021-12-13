#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e9+1;

vector<ll> cows(3);

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    for (ll i=0; i<3; i++) {
        cin>>cows[i];
    }
    sort(cows.begin(), cows.end());
    if (cows[1]-cows[0]==1 && cows[2]-cows[1]==1) {
        cout<<0<<"\n";
    } else if (cows[1]-cows[0]==2 || cows[2]-cows[1]==2) {
        cout<<1<<"\n";
    } else {
        cout<<2<<"\n";
    }
    cout<<max(cows[1]-cows[0], cows[2]-cows[1])-1<<"\n";

    return 0;
}