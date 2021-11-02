#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

//Find the ant distances first, and then find the distances of the BMP and MSA

int n, m;
vector<vector<int>> adj;
int antdist[101], bmpdist[101];
void bfs(int start, int end) {
    
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);


cin>>n>>m;
for (int i=0; i<m; i++)  {
    int x, y;
    cin>>x>>y;
    adj[x].push_back(y); adj[y].push_back(x);

}


 
return 0;
}