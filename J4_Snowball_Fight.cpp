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

int n, t; cin>>n>>t;
vector<queue<int>> students(n+1);
vector<int> thrownto(n+1); 
for (int i=1; i<=n; i++) {
    int to; cin>>to;
    students[i].push(to);
}
for (int i=0; i<t; i++) {
    for (int j=1; j<=n; j++) {
        if (students[j].size()<=0) continue;
        int to = students[j].front(); students[j].pop();
        thrownto[j] = to;
        students[to].push(j);
    }
}
for (int i=1; i<=n; i++) {
    cout<<thrownto[i];
    if (i<n) cout<<" ";
}
cout<<endl;
return 0;
}