#include <bits/stdc++.h>
#define ll long long
#define INF 1e9;
using namespace std;

int main()
{
    int n, w, d;
    cin >> n >> w >> d;
    
    vector<int> adj[n + 1];
    int walkw[n + 1];
    for (int i = 1; i < n; ++i)
    {
        walkw[i] = INF;
    }
    walkw[n] = 0;

    for (int i = 0; i < w; ++i)
    {
        int a, b;
        cin >> a >> b;
        adj[b].push_back(a);
    }

    queue<int> q;
    bool visited[n + 1];
    q.push(n);
    memset(visited, 0, n + 1);
    while (q.size() > 0)
    {
        int temp = q.front();
        visited[temp] = true;
        q.pop();
        for (int next : adj[temp])
        {
            if (!visited[next])
            {
                visited[next] = true;
                q.push(next);
                walkw[next] = walkw[temp] + 1;
            }
        }
    }

    int order[n + 1];
    multiset<int> ms;
    for (int i = 1; i <= n; i++)
    {
        cin >> order[i];
        ms.insert(i - 1 + walkw[order[i]]);
    }

    for (int i = 0; i < d; ++i)
    {
        int s1, s2;
        cin >> s1 >> s2;

        ms.erase(ms.find(s1 - 1 + walkw[order[s1]]));
        ms.erase(ms.find(s2 - 1 + walkw[order[s2]]));

        swap(order[s1], order[s2]);

        ms.insert(s1 - 1 + walkw[order[s1]]);
        ms.insert(s2 - 1 + walkw[order[s2]]);

        cout << *ms.begin() << '\n';
    }

    return 0;
}