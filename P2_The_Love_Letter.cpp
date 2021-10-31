#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, l;cin>>n>>l;cin.ignore();
string a;
char letters[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
getline(cin, a);
map<char, int> x;
for (int i=0; i<26; i++) {
    x[letters[i]] = i;

}

for (char i: a) {
    if (i==' ') cout<<" ";
    else {
        int temp = x[i];temp += l;temp %= 26;
        cout << letters[temp];
    }
}
cout<<endl;

return 0;
}