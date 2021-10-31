#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n;
cin>>n;
cin.ignore();
int entry = 1;
while(n--)  {
    int index;
    cin>>index;
    string word;
    getline(cin, word);
    word.erase(word.begin(), word.begin()+1);
    vector<char> newword;
    for (int i=0; i<word.length(); i++) {
        if ((i+1)!=index) newword.push_back(word.at(i));
    }
    cout<<entry<<" ";
    for (auto i: newword) {
        cout<<i;
    }
    cout<<endl;
    entry++;
}
 
return 0;
}