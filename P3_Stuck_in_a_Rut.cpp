#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

struct cow{
    char direction;
    int row;
    int col;
    int grass;
}



 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
vector<cow> v;
int n, maxrow, maxcol; cin>>n;
for (int i=0; i<n; i++) {
    char direction; int row, col;
    cin>>direction>>row>>col;
    v.push_back({direction, row, col, 1});
    maxrow = max(maxrow, row); maxcol = max(maxcol, col);
}
bool vis[maxrow+1][maxcol+1];

 
return 0;
}