#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;
int n, m, c;
vector<int> cows;
bool s(int maxwait) {
    int currentcowindex = 0;
    int startcowtime = cows[0], bus_size = 0, bus_count=1;
    for (auto i: cows) {    
        if (i-startcowtime>maxwait || bus_size>=c) {
            startcowtime = i;
            bus_count++;
            bus_size = 1;
        } else {
            bus_size++;
        }
    }
    if (bus_count>m) return false;
    return true;
}   

int main() {
freopen("convention.in", "r", stdin);
freopen("convention.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0); 

//we are searching for the optimal waiting time for any arriving cow,
//so if a cow exceeds that waiting time in the method, return false

 cin>>n>>m>>c;
cows.resize(n);
for (int i=0; i<n; i++) {
    cin>>cows[i];
}
sort(cows.begin(), cows.end());
int left = 0, right = (int)1e9;
while(left<right) {
    int mid = left+(right-left)/2;
    bool result = s(mid);
    if (result) {
        right = mid;
    } else {
        left = mid+1;
    }
}
cout<<left<<endl;

return 0;
}