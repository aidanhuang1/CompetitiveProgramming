#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int nums[] = {1,2,3,4,5,6,7,8};
int count[8]; memset(count, 0, sizeof (count));

int test[8][8];



for (int i=0; i<8; i++) {
    for (int j=i+1; j<8; j++) {
        count[i]++; count[j]++;
    }
}
for (auto i: count) cout<<i<<endl;


memset(test, 0, sizeof test);
for(auto &i: test) {
    for (auto j: i) {
        cout<<j<<" ";
    }
    cout<<endl;
}
return 0;
}