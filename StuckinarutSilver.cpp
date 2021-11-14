#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct cowintercept {
    int x, y, a, b; 
    };
vector<int> responsible[1001];
int ans[1001], pnt[1001]; 

int dfs(int start, int pnt) {
    int answer = 1;
    for (int i: responsible[start]) {
        if (i!=pnt) {
            answer+=dfs(i, start);
        }
    }
    ans[start] = answer;
    return answer;
}

int main(){
    int n;

    vector<cowintercept> lst;
    cin >> n;
    int x[n+1], y[n+1];
    char dir[n+1]; 
    for(int i=1; i<=n; i++) {   
        cin >> dir[i] >> x[i] >> y[i];
    }
    for(int i=1; i<=n; i++) {
        for(int j=i+1; j<=n; j++) {
            if(dir[i] == dir[j]) continue;
            int ex = x[i], ey = y[i];
            int ncol = x[i], nrow = y[i]; //initialize
            if(dir[i] == 'E') {
                ncol = x[j]; nrow = y[j]; 
            }else if (dir[i]=='N') {
                ex = x[j]; ey = y[j]; 
            }
            if(ex < ncol && nrow < ey) {
                lst.push_back(cowintercept{ncol, ey, i, j});
            }
        }
    }   
    sort(lst.begin(), lst.end(), [](cowintercept a, cowintercept b) {
        if (a.x != b.x) {
            return a.x < b.x;
        }
        return a.y < b.y;
    });     

    bool stop[n+1]; 
    memset(stop, false, sizeof stop);
    memset(pnt, -1, sizeof pnt);
    for(cowintercept i : lst) { 
        if(stop[i.a] || stop[i.b]) continue;
        int ta = i.x - x[i.a] + i.y - y[i.a];
        int tb = i.x - x[i.b] + i.y - y[i.b];
        if(ta < tb) {  
            stop[i.b] = true; 
            responsible[i.a].push_back(i.b); 
            pnt[i.b] = i.a;
        }
        else if(ta > tb) { 
            stop[i.a] = true;
            responsible[i.b].push_back(i.a);
            pnt[i.a] = i.b;

        }
    }
    memset(ans, 0, sizeof ans);
    for (int i=1; i<=n; i++) {
        if (pnt[i]==-1) dfs(i, -1);
    }
    for(int i=1; i<=n; i++) {
        cout<<ans[i]-1<<endl;
    }
}
