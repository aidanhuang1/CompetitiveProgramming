#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;
vector<vector<pair<int,int>>> graph;
vector<int> visited;
vector<int> cows;

void dfs(int node, int k, int group){
    visited[node] = group;
    for (auto i: graph[node]){
        if (visited[i.first] != -1) continue;
        if (i.second < k) continue;
        dfs(i.first, k, group);
    }
}

bool s(int k){
    for (int i = 0; i < cows.size(); i++){
        if (visited[i] != -1) continue;
        dfs(i, k, i);
    }
    for (int i = 0; i < cows.size(); i++){
        if (visited[cows[i]-1] != visited[i]){
            return false;
        }
    }
    return true;
}

int main() {

cin.sync_with_stdio(0);
cin.tie(0);
freopen("wormsort.in", "r", stdin);
freopen("wormsort.out", "w", stdout);
    int n,m;
    cin >> n >> m;
    cows.resize(n); graph.resize(n); visited.resize(n);
    for (int i = 0; i < n; i++)
        cin >> cows[i];
    int maxW = 0;
    for (int i = 0; i < m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        a--; b--;
        maxW = max(maxW, c);
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
    }

    int as = 0;
    for (int i = 0; i < n; i++)
        if (cows[i]-1 == i)
            as++;
    if (as == n){
        cout << -1 <<endl;
        return 0;
    }
    int lo = 1, hi = maxW, ans;
    while(lo <= hi){
        int mid = (lo + hi)/2;
        for (int i=0; i<n; i++) {visited[i] = -1;}
        if (s(mid)) {ans = mid; lo = mid+1; }
        else {hi = mid - 1;}
    }
    cout<<ans<<endl;
}