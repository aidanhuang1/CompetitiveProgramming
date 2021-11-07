#include <bits/stdc++.h>

using namespace std;

vector<int> adj[10001];
bool visited[10001] = {0};
int previous[100001], dist[100001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long M, N;
    cin >> M >> N;

    for (int i = 0; i < M; ++i) {
        string first, second;
        cin >> first >> second;

        int f = first[0] - 'A', s = second[0] - 'A';

        adj[f].push_back(s);
        adj[s].push_back(f);
    }

    for (int i = 0; i < N; ++i) {
        string first, second;
        cin >> first >> second;

        int f = first[0] - 'A', s = second[0] - 'A';

        memset(previous, -1, sizeof(previous));
        memset(dist, 0, sizeof(dist));
        memset(visited, false, sizeof(visited));
        visited[s] = true;

        list<int> q;
        q.push_back(s);

        while (!q.empty()) {
            int current = q.front();
            q.pop_front();

            if (current == f) {
                break;
            }

            for (auto &next : adj[current]) {
                if (!visited[next]) {
                    visited[next] = true;
                    previous[next] = current;
                    dist[next] = current + 1;
                    q.push_back(next);
                }
            }
        }

        while (f != -1) {
            cout << (char)(f + 'A');
            f = previous[f];
        }
        cout << "\n";
    }
}