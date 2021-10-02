#include <bits/stdc++.h>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

string bfs(int start, int end, vector<int> adj[]) {
    queue<int> q;
    bool visited[2001];
    memset(visited, false, sizeof(visited));
    q.push(start);
    while (!q.empty()) {
        int temp = q.front();
        if (temp == end) {
            return "GO SHAHIR!";
        }
        visited[temp] = true;
        q.pop();
        for (int i : adj[temp]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
    return "NO SHAHIR!";
}

int main() {
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);
    vector<int> adj[2001];
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout << bfs(a, b, adj) << endl;
    return 0;
}