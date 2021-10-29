#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

struct abc {
    int x;
    int y;
};
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

vector<abc> a;
a.push_back({1,2});
a.push_back({2,3});
for (auto i: a) {
    cout << i.x <<" "<<i.y<< endl;
}

int b[10];
int c[10][10];
memset(b, -1, sizeof(b));
memset(c, -1, sizeof(c));
for (auto &i: b) {
    cout<<i<<endl;
}
for (auto &i: c) {
    for(auto &j: i) {
        cout << j<< " ";
    }
    cout<<endl;
}


 
return 0;
}