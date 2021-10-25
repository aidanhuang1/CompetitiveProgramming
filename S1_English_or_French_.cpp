#include <bits/stdc++.h> 
#include <iostream>
#define pb push_back
#define mp make_pair
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n;
cin>>n; cin.ignore(); int t=0, s=0;
while(n--) {
    string text;    
    getline(cin, text);
    for (int i=0; i<(int)text.size(); i++) { 
        if (text[i]=='t' || text[i]=='T')   {
            t++;
        } else if (text[i]=='s' || text[i]=='S') {
            s++;
        }
    }
    
}
if (t>s) cout <<"English"<<endl; else cout<<"French"<<endl;
return 0;
}