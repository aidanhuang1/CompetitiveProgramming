#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
bool conf[401][401];
int c;
void find(int i, int n, vector<int> &comb){
    if(i > n){
        c++;
        return;
    }find(i+1, n, comb);
    bool valid = true;
    for (int e: comb) {
        if (conf[e][i]) valid = false;
    }
    if (valid) {
        
    comb.push_back(i); find(i+1, n, comb); comb.pop_back();
    }
    
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
int n, m;
cin>>n>>m;
memset(conf, false, sizeof conf);
for (int i=0, x, y; i<m; i++) {
    cin>>x>>y;
    conf[x][y] = conf[y][x] = true;
}
vector<int> comb;
find(1, n, comb);
cout<<c<<endl;
return 0;
}