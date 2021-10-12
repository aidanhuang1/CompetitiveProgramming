#include <bits/stdc++.h> 
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
vector<int> adj[5];



void dfs1(int start) {
    bool visited[5];
    visited[start] = true;
    stack<int> st;
    st.push(start);
    while(!st.empty()) {
        int temp = st.top();
        st.pop();
        cout << temp << endl;
        for (int i: adj[temp]) {
            if (!visited[i]) {
                st.push(i);
            }
        }
    }
}

bool visited[5];
void dfs2(int node) {
    visited[node] = true;
    cout << node << endl;
    for (int i: adj[node]) {
        if (!visited[i]) {
            dfs2(i);
        }
    }
}
 
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);


adj[0].push_back(1);
adj[1].push_back(2);
adj[2].push_back(3);
adj[3].push_back(0);
dfs1(0);
dfs2(0);
return 0;
}