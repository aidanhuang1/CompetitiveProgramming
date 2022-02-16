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


//1 3
//2 2
//3 1
set<int> used;
int n, cnt = 0; cin>>n;
for (int i=1; i<=5; i++) {
    for (int j=0; j<=5; j++) {
        if (i+j==n && used.count(i)==0) {
            cnt++; used.insert(j);
        }
    }
}
cout<<cnt<<endl;
return 0;
}