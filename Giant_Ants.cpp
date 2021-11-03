#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int n, m;
vector<int> adj[101];
int antdist[101], bmpdist[101];
queue<int> q;
void ant() {
    while(!q.empty()){
    int cur = q.front(); 
    q.pop();
    for (int i: adj[cur]) {
        if (antdist[i]==-1) {
            antdist[i] = antdist[cur]+4;
            q.push(i);
            }
        }
    }
}
void bmp() {
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        for (int i: adj[cur]) {
            if (bmpdist[i]==-1 && antdist[i]>bmpdist[cur]+1) {
                bmpdist[i] = bmpdist[cur]+1;
                q.push(i);
            }
        }
    }
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

fill(begin(antdist), end(antdist), -1);fill(begin(bmpdist), end(bmpdist), -1);
cin>>n>>m;
for (int i=0, x, y; i<m; i++)  {
    cin>>x>>y;
    adj[x].push_back(y); adj[y].push_back(x);
}
int w; cin>>w;
for (int i=0, n; i<w; i++) {
    cin>>n; antdist[n] = 0;
    q.push(n);
}
bmpdist[1] = 0;
ant();
q.push(1);
bmp();
if (bmpdist[n]!=-1) {
    cout<<bmpdist[n]<<endl;
} else {
    cout<<"sacrifice bobhob314"<<endl;
}

return 0;
}