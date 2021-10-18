#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

struct adj { ll a, b, c;};
struct fr { ll p, w, d; } arr[10];

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

vector<adj> sub;
sub.resize(10);
for (int i=0; i<5; i++) {
    cin >> sub[i].a >> sub[i].b >> sub[i].c;
}




arr[0].p = 12;
cout << sub[0].a << endl;
cout << arr[0].p<< endl;
return 0;
}