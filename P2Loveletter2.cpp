#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, l;
cin>>n>>l;
cin.ignore();
string a;
getline(cin, a);
for(auto &i: a) {
    if (i==' ') cout<<" ";
    else {
        cout << (char)(((i-'a')+l)%26+'a');
    }
}
cout<<endl;
 
return 0;
}