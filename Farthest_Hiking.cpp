#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

ll m, n, u, f, d;
string to;
bool s(ll farthestdist) {
    ll time = 0;
    for (int i=0; i<farthestdist; i++) {
        if (to[i]=='u') time+=u+d;
        else if (to[i]=='f') time+=f+f;
        else if (to[i]=='d') time+= d+u;
    }
    if (time>m)return false;
    return true;

}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>m>>n>>u>>f>>d;
cin>>to;

ll left = 0, right = n;
while(left<right) {
    ll mid = (left+right)/2;
    if (s(mid)) {
        left = mid;
    } else {
        right = mid-1;
    }
}
cout<<left<<endl;


return 0;
}