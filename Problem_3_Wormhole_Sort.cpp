#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int n, m; vector<int>cows;
struct wh{
    int p1;
    int p2;
    int w;
};
vector<wh> wormholes;
int parent[MM];

int find(int u) {
    if (parent[u]!=u) {
        parent[u] = find(parent[u]);
    }
    return parent[u];
}

void uni(int a, int b) {
    a = find(a), b = find(b);
    if (a!=b) {
        parent[a] = b;
    }
}

bool s(int minimumweight) {
    for (auto w: wormholes) {
        if (w.w>=minimumweight) {
            uni(w.p1, w.p2);
        }
    }   
    for (int i=0; i<n; i++) {
        if ((find(cows[i])!=find(i+1))) {
            return false;
        }
    }
    return true;
}

int main() {
//COMMENT OUT FILE I/O WHEN RUNNING LOCALLY
freopen("wormsort.in", "r", stdin);
freopen("wormsort.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for (int i=0; i<n; i++) {
    int a; cin>>a; cows.push_back(a);
}
for (int i=0; i<m; i++) {
    int a, b, w; cin>>a>>b>>w;
    wormholes.push_back({a,b,w});
}

bool sorted = true;
for (int i=0; i<n-1; i++) {
    if (cows[i+1]-1!=cows[i]) {
        sorted = false;
        break;
    }
}
if (sorted) {
    cout<<"-1"<<endl;
    return 0;
}

int left = 0, right = INT_MAX, ans = -1;
while(left<=right) {
    int mid = (left+right)/2;
    for (int i=1; i<=n; i++) {
        parent[i] = i;
    }
    if (s(mid)) {
        left = mid+1;
        ans=max(ans, mid);
    } else {
        right = mid-1;
    }
}
cout<<ans<<endl;
return 0;
}