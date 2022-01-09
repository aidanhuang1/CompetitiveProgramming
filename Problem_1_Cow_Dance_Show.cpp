#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;
int n, t;
vector<int> cows;
bool s(int k) {
    int time = 0, currentcow = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto i: cows) {
        if (pq.size()==k) {
            time = pq.top(); pq.pop();
        }   
        if (time+i>t) {
            return false;
        }
        pq.push(time + i);
    }
    return true;
}


int main() {
freopen("cowdance.in", "r", stdin);
freopen("cowdance.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>t;
cows.resize(n);
for (int i=0; i<n; i++) {
    cin>>cows[i];
}

int left = 0, right = t;
while(left<right) {
    int mid = (left+right)/2;
    bool result = s(mid);
    if (result) { //mid is enough 
        right = mid;
    } else {
        left = mid+1;
    }
}
cout<<left<<endl;

return 0;
}