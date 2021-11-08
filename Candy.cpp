#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
vector<int> v;
    int i = 1;
    while(i*i <= n) {
        if(n % i == 0) {
            v.push_back(i);
            if(n/i != i) {
                v.push_back(n/i);
            }
        }
        i++;
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << endl;
    }
    
return 0;
}