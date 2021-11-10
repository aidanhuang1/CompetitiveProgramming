#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int n, q;
char puzzle[26][26];
bool vis[26][26];

bool rec(int i, int j, int index, string word) {
    if (index>=word.length()) return true;
    vis[i][j] = true;
    for (int a=-1; a<=1; a++) {
        for (int b=-1; b<=1; b++) {
            if (i+a>=0 && i+a<n && j+b>=0 && j+b<n && !vis[i+a][j+b] && puzzle[i+a][j+b]==word[index]) {
                if (rec(i+a, j+b, index+1, word)) return true;
            }
        }
    }
    vis[i][j] = false;
    return false;

}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>q;
for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
        cin>>puzzle[i][j];
    }
}
for (int i=0; i<q; i++) {
    string a; cin>>a;
    memset(vis, false, sizeof vis);
    bool found = false;
    int curletter = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (puzzle[i][j]==a[curletter]) {
                found = rec(i, j, 1, a);
                if (found)goto done;
                
            }
        
        }
    }
    done:
    cout<<(found ? "good puzzle!" : "bad puzzle!")<<endl;

}

 
return 0;
}