#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int N;
int par[MM], rnk[MM];

bool findset(int u) {
    if (par[u] == u) return u;
    else return par[u] = findset(par[u]);
}

bool join(int a, int b) {
        a = findset(a), b = findset(b);
        if (a == b) {
            return 0;
        }
        if (rnk[a] < rnk[b]) {
            swap(a, b);
        }
        par[b] = a;
        if (rnk[a] == rnk[b]) {
            ++rnk[a];
            }
        return 1;
    }

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

//set all node parents to itself
for (int i=1; i<=N; i++) {
    par[i] = i; 
    rnk[i] = 1;
}

return 0;
}