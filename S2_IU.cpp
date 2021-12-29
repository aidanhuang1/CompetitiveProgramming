#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main(){
    ll N; int ans;
    string s;
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> N >> s;
    for(int i=0, last=0; i<s.size(); i++) {
        if(s[i] == 'I') {
            ans += abs(i - last);
            last += 2;
        }
    }
    cout << ans << "\n";
    return 0;
}
