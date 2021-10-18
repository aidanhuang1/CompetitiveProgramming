#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

vector<ll> p, w, d;
ll n;
ll findtime(ll mid) {
    ll temptime = 0;
    for (int i=0; i<n; i++) {
        ll timeforfriendtowalk = 0;
        ll distance = abs(mid-p[i])-d[i];
        if (distance>0) {
            temptime += distance*w[i];
            }
        }
        return temptime;
    }

int main() {
cin.sync_with_stdio(0);
cin.tie(0);


cin >> n;
p.resize(n); w.resize(n); d.resize(n); 
for (int i=0; i<n; i++) {
    cin >>p[i] >> w[i]>>d[i];
}

ll left = 0, right = 2e9, besttime = 2e9, currentpos=0;
while(left<=right) {
    ll mid = (left+right)/2; //we test a position for the concert
    currentpos = findtime(mid);
    ll immediateleft = findtime(mid-1), immediateright = findtime(mid+1);

    if (immediateleft >= currentpos && immediateright>= currentpos) {
        break;
    } else if (immediateleft>currentpos) {
        left=mid+1;
    } else if (immediateright>currentpos) {
        right=mid-1;
    }
}
cout << currentpos << endl;

return 0;
}