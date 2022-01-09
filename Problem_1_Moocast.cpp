#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

struct cow {
    int from;
    int to;
    int r;
};

int x[MM];
int y[MM];
vector<cow> cows;
int parent[MM], rnk[MM];

int find(int u) {
    if (parent[u]!=u) {
        parent[u] = find(parent[u]);
    }
    return parent[u];
}

void uni(int a, int b) {
    a = find(a), b=find(b);
    if (a==b) return;
    if (rnk[a]>rnk[b]) {
        parent[b] = a;
    } else {
        parent[a] = b;
        if (rnk[a]==rnk[b]) rnk[b]++;
    }
}

int main() {
freopen("moocast.in", "r", stdin);
freopen("moocast.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
for (int i=0; i<n; i++) {
    cin>>x[i]>>y[i];
}

for (int i=0; i<n; i++) {
    for (int j=0; j<n && i!=j; j++) {
        int distance = (pow(x[i]-x[j], 2) + pow(y[i]-y[j], 2));
        cows.push_back({i, j, distance});
    }
}
sort(cows.begin(), cows.end(), [](const cow& a, const cow& b) {return a.r<b.r;});
for (int i=0; i<n; i++) {
    parent[i] = i;
    rnk[i] = 1;
}
int connected = 1, maxW = 0;
for (auto i: cows) {
    if (find(i.from)!=find(i.to)) {
        uni(i.from, i.to);
        connected++;
        maxW = max(maxW, i.r);
        if (connected==n) {
            cout<<maxW<<endl;
            return 0;
        }
    }
}


return 0;
}