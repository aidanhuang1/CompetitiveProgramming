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
deque<pair<int, int>> dq; //id, status
for (int i=0; i<n; i++) {
    char a; int num;
    cin>>a>>num;
    if (a=='F') {
        dq.push_front({num, 1});
    } else if (a=='R') {
        for (auto& i: dq) {
            if (i.first==num) {
                i.second=0;
            }
        }
    } else if (a=='E') {
        dq.push_back({num, 1});
    }
}
for (auto i: dq) {
    if (i.second!=0) cout<<i.first<<endl;
}
 
return 0;
}