#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
 vector<vector<int>> friends;
 friends.resize(2, vector<int>(2));
 for (int i=0; i<2; i++) {
    for (int j=0; j<2; j++) {
        cin >> friends[i][j];
    }
}
cout << friends[0][0] << endl;
return 0;
}