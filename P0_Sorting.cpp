#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

void look() {
    vector<int> n;

    for (int i=0, x; i<3; i++) {
        cin>>x;
        n.push_back(x);
        if (i!=0 && n[i-1]>x) {
            cout<<"Try again!"<<endl;
            return;
        }
    }
    cout<<"Good job!"<<endl;
    return;
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

look();
 
return 0;
}