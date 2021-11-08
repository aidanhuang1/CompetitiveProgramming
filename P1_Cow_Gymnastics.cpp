#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
vector<vector<int>> v(11, vector<int>(12, 0));
int k, n, c=0; cin>>k>>n;
for (int i=0; i<k; i++)  {
    for (int j=0; j<n; j++) {
        cin>>v[i][j];
    }
}
 
for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
        bool valid = true;
        if (find(v[i].begin(), v[i].end(), i)>find(v[i].begin(), v[i].end(), j+1)) {
            for (auto k: v) {
                if (find(v[i].begin(), v[i].end(), i)<find(v[i].begin(), v[i].end(), j+1)) {
                    valid = false;
                    break;
                }
            }
            
        } else if (find(v[i].begin(), v[i].end(), i)<find(v[i].begin(), v[i].end(), j+1)) {
            for (auto k: v) {
                if (find(v[i].begin(), v[i].end(), i)>find(v[i].begin(), v[i].end(), j+1)) {
                    valid = false;
                    break;
                }
            }
        }
        if (valid) c++;
    }
}
cout<<c<<endl;
return 0;
}