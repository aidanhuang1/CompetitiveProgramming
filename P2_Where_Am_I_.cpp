#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n; string s;
cin>>n>>s;
for(int len = 1; len <= n; len++){
    unordered_set<string> used;
    bool valid = true;
    for(int i=0; i+len <= n; i++) {
        string sub = s.substr(i, len);
        if(used.count(sub)) {
            valid = false; break;
        }
        used.insert(sub);	
    }
    if(valid) {
        cout << len << endl;
        break;
    }
}
 
return 0;
}
