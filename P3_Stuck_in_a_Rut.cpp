#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct cowintercept {
    int x, y, a, b; 
    };


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

    bool stop[n+1]; int ans[n+1];
    memset(stop, false, sizeof stop); memset(ans, 0, sizeof ans);
    // for (auto i: lst) {
    //     printf("%d %d %d %d\n", i.x, i.y, i.a, i.b);
    // }
    
    for(cowintercept i : lst) { 
        if(stop[i.a] || stop[i.b]) continue;
        int ta = i.x - x[i.a] + i.y - y[i.a];
        int tb = i.x - x[i.b] + i.y - y[i.b];
        if(ta < tb) {  
            stop[i.b] = true; ans[i.b] = tb;
        }
        else if(ta > tb) { 
            stop[i.a] = true; ans[i.a] = ta; 
        }
    }
    for(int i=1; i<=n; i++) {
        if(stop[i]) cout << ans[i] << endl;
        else cout << "Infinity" << endl;
    }
}
