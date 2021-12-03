#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

struct st{
    ll p, w, d;
};

int n;
vector<st> friends;

ll check(int pos) {
    ll ttime = 0;
    for (st i: friends) {
        ll dist = (abs(pos-i.p)-i.d)*i.w;
        if (dist>0) {
            ttime+=dist;
        }
    }
    return ttime;
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n;
for (ll i=0, p, w, d; i<n; i++) {
    cin>>p>>w>>d;
    friends.push_back({p, w, d});
}
ll left = 0, right = 10000000000;
while(left<right) {
    ll mid = (left+right)/2;
    ll a = check(mid), r = check(mid+1), l = check(mid-1);
    if (l>=a && a<=r) {
        cout<<a<<endl; break;
    } else if (l>=a && a>=r) {
        left = mid;
    } else if (l<=a && a<=r) {
        right = mid;
    }
}
 
return 0;
}