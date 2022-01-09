#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
vector<ll> students[3];
for (int i=0; i<3; i++) {
    for (int j=0; j<n; j++) {
        ll temp; cin>>temp;
        students[i].push_back(temp);
    }
}
sort(students[0].begin(), students[0].end());sort(students[1].begin(), students[1].end());sort(students[2].begin(), students[2].end());
ll possible[n];
for (int i=0; i<n; i++) {
    
}





return 0;
}