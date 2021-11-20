#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

vector<int> a ({1, 2, 3, 4});
sort(a.begin(), a.end(), [](int first, int second) {
    return first>second;
});

vector<int> newarray(3);
copy_if(a.begin(), a.end(), newarray.begin(), [](int a) {return a==1;});
for (auto i: newarray) cout<<i<<endl;
 
return 0;
}