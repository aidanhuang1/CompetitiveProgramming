#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
freopen("gymnastics.in", "r", stdin);
freopen("gymnastics.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int k, n; cin>>k>>n;
int arr[k][n], count[21][21]; //col = first number, row = second number
memset(count, 0, sizeof count);
for (int i=0; i<k; i++) {
    for (int j=0; j<n; j++) {
        cin>>arr[i][j];
    }
}
for (int x=0; x<k; x++) {
for (int i=0; i<n; i++) {
    for (int j=i+1; j<n; j++) {
        count[arr[x][i]][arr[x][j]]++;
    }
}
}
int cnt =0 ;
for (int i=0; i<=20; i++) {
    for (int j=0; j<=20; j++) {
        if (count[i][j]==k) cnt++;
    }
}
cout<<cnt<<"\n";


return 0;
}