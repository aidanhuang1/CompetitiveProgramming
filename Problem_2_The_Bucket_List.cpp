#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
    freopen("blist.in", "r", stdin);
	freopen("blist.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);
int arr[MM]; memset(arr, 0, sizeof arr);
int n; cin>>n;
for (int i=0, a, b,c; i<n; i++) {
    cin>>a>>b>>c;
    for (int j=a; j<=b; j++) {
        arr[j]+=c;
    }
}

int maxn = 0;
for (int i=1; i<=1000; i++) {
    maxn = max(maxn, arr[i]);
}
cout<<maxn<<"\n";
return 0;
}