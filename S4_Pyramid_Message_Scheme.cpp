#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
for (int i=0, n; i<t; i++) {
        cin >> n; 
        vector<string> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int depth = 0, cur = -1;  unordered_map<string, int> mp;
        for(int i=n-1; i>=0; i--) {
            if(!mp.count(v[i])){
                mp[v[i]] = ++cur;  depth = max(depth, cur);
            }else{
                cur = mp[v[i]];
            }
        }
        // cout<<n<<" "<<depth<<endl;
        cout << n*10 - depth*20 << endl;
    }
    return 0;
}
