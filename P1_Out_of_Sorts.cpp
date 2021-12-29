#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int n, ans;

int main(){
    cin.sync_with_stdio(0);
cin.tie(0);

    cin >> n; 
    vector<pair<int, int>> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i].first; 
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++) {
        ans = max(ans, a[i].second - i);
    }
    cout <<ans+1 <<"\n";
}