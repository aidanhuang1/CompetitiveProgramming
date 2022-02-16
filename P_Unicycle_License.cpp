#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

ll m; cin>>m;
ll a = 12, b = -5, c = -(m-1);

cout<<setprecision(6)<<fixed<<((-b + sqrt(pow(b, 2)-4*a*c))/(2*a))<<endl;
return 0;
}