#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e2+1;


int main() {
//freopen(, , stdin);
//freopen(, , stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int k, n; cin>>k>>n;
char l[n][n];
for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
        if (i==j) l[i][j]='B';
        else l[i][j]='?';
    }
}
map<string, int>m;
for (int i=0; i<n; i++) {
    string x; cin>>x;
    m[x] = i;
}
for (int i=0; i<k; i++) {
    string cur[101];
    for (int j=0; j<n; j++) {
        cin>>cur[j];
    }
    for (int j=0; j<n; j++) {
        bool isalpha = true;
        for (int x=j+1; x<n; x++) {
            if (cur[x-1]>cur[x]) isalpha=false;
            if(!isalpha) {
                int a=m[cur[j]], b = m[cur[x]];
                l[a][b] = '0'; l[b][a] = '1';
            }
        }
        
    }     
}
for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
        cout<<l[i][j];
    }
    cout<<"\n";
}




return 0;
}