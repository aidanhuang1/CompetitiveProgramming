#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e6+1;

vector<int> cows, temp;

int s() {
    int i1 = abs(temp[1]-temp[0]), i2 = abs(temp[2]-temp[1]);
    if (i1>=i2) {
        return 0; //left
    } else if (i1<i2) {
        return 1; //right
    }
    return -1;
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);
for (int i=0, a; i<3; i++) {
    cin>>cows[i];
}

do {




}
while (cows[1]-cows[0]!=1 && cows[2]-cows[1]!=1);


return 0;
}