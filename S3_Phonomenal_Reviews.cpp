#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
int n, m, diameter=0, node=0, lastpho=0, longest;
int pho[100001];
vector<int> oldadj[100001], newadj[100001];

void rmv(int cur, int prev) {
    for (auto i: oldadj[cur]) {
        if (i!=prev) {
            rmv(i, cur);
            if (newadj[i].size()!=0 || pho[i]) {
                longest++;
                newadj[cur].push_back(i); newadj[i].push_back(cur);
                lastpho = cur;
            }
        }
    }   
}

void dia(int cur, int prev, int dist) {
    // cout<<cur<<endl;
    if (dist>diameter) {
        diameter = dist;
        node = cur;
    }
    for (auto i: newadj[cur]) {
        if (i!=prev) {
            dia(i, cur, dist+1);
        }
    }
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

memset(pho, false, sizeof pho);
cin>>n>>m;
for (int i=0, a; i<m; i++) {
    cin>>a;
    pho[a] = true;
    lastpho = a;
}

for (int i=0, a, b; i<n-1; i++) {
    cin>>a>>b;
    oldadj[a].push_back(b); oldadj[b].push_back(a);
}
rmv(lastpho, -1);
dia(lastpho, -1, 0);
dia(node, -1, 0);
cout<<longest*2-diameter<<endl;

return 0;
}