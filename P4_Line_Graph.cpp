#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int parent[MM];
vector<pair<int, pair<int, int>>> edges;

int find(int x) {
    if (parent[x]!=x) {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

void uni(int x, int y) {
    parent[x] = y;
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, k; cin>>n>>k;
for (int i=1; i<=n; i++) {parent[i]=i;}

int prev;
vector<int> v;
for (int i=0, x; i<n-1; i++) {
    cin>>x; if (i==0) { prev=x; continue;}
    edges.push_back({x, {i, i+1}});
    prev = x;
}
sort(edges.begin(), edges.end());
int ttl = 0, cnt = 0;
for (auto i: edges) {
    int weight = i.first, from = i.second.first, to = i.second.second;
    if (find(from)!=find(to)) {
        ttl++; cnt++;
        if (find(from)!=find(from+k)) {
            cnt++;
        }
        if (find(to)!=find(to+k)) {
            cnt++;
        }
        if (cnt>=n-1) goto done;
    }
}
done:
cout<<ttl<<" "<<cnt<<endl;


return 0;
}