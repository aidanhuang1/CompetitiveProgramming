#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

struct ans{
    string beststr;
    int bestval;
};

void comparestrings(str x)   {

}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int r, c;
cin>>r>>c;
cin.ignore();
struct ans v;
v.beststr="zzzzzzzzzz";
v.bestval=1e9;

vector<string> test;


for (int i=0; i<r; i++) {
    string line;
    getline(cin, line);
    test.push_back(line);
}
//row
for (int i=0; i<r; i++) {
    string x = "";
    
    for (int j=0; j<c; j++) {
        if (test[i].char)
    }

}

 
return 0;
}