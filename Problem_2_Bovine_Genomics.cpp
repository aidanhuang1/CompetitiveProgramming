#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;


int main() {
freopen("cownomics.in", "r", stdin);
freopen("cownomics.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int n, m;cin>>n>>m;
char spotty[n][m], plain[n][m];
for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
        cin>>spotty[i][j];
    }
}
for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
        cin>>plain[i][j];
    }
}

int cnt = 0;
for (int j=0; j<m; j++) { //iterate through the positions
    int ac = 0, cc =0, gc=0, tc=0;
    for (int i=0; i<n; i++) {
        if (spotty[i][j]=='A') ac++;
        else if (spotty[i][j]=='C') cc++;
        else if (spotty[i][j]=='G') gc++;
        else if (spotty[i][j]=='T') tc++;
    }

    //look at plain cows
    bool valid = true;
    for (int i=0; i<n; i++) {
        if (plain[i][j]=='A' && ac>0) valid = false;
        if (plain[i][j]=='C' && cc>0) valid = false;
        if (plain[i][j]=='G' && gc>0) valid = false;
        if (plain[i][j]=='T' && tc>0) valid = false;
    }
    if (valid) cnt++;
}
cout<<cnt<<"\n";
return 0;
}