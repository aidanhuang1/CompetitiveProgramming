#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e6+1;

int n, m, c; vector<int> cows(MM);

bool check(int maxtime) {
    int buses = m, firstcow = 0, curcnt=0;
    for (int i=0; i<n; i++) {
        if (abs(cows[i]-cows[firstcow])>maxtime || curcnt>=c) {
            firstcow = i;
            buses--;  
            curcnt=0;
        } 
        curcnt++;
    }


    m--;
    if (m<0) {
        return false;
    }
    return true;
    
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>m>>c;
for (int i=0; i<n; i++) {
    cin>>cows[i];
}
sort(cows.begin(), cows.end());
int left = 0, right = (int)1e9;
while(left<right) {
    int mid = (left+right)/2;
    if (check(mid)) {
        right = mid;
    } else {
        left = mid+1;
    }
    cout<<left<<" "<<right<<"\n";
}
cout<<left<<"\n";

return 0;
}