#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n;cin>>n;
cin.ignore();
while(n--) {
    int x;cin>>x;
    string s = bitset<256> (x).to_string();
    string news;
    for (int i=0; i<s.length()%4; i++) {
        news.append("0");
    }
    news+=s;
    for (int i=0; i<=news.length(); i+=4) {
        string strarray = news.substr(i, 4);
        if (strarray!="0000") {
            cout<<strarray<<" ";
        }
    }
    cout<<endl;
}

return 0;
}