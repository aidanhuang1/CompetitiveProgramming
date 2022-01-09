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
int totaltime = 0, prevattractionposition = 0;
vector<int> attractions;
for (int i=0; i<n; i++) {
    int a; cin>>a; attractions.push_back(a);
    totaltime+=abs(prevattractionposition-a);
    prevattractionposition = a;
}
totaltime+=abs(prevattractionposition-0);

for (int i=0; i<n; i++) {
    if (i==0) {
        cout<<totaltime-abs(0-attractions[i])-abs(attractions[i]-attractions[i+1])+abs(0-attractions[i+1])<<"\n";
    } else if (i==n-1) {
        cout<<totaltime-abs(attractions[i-1]-attractions[i])-abs(attractions[i]-0)+abs(attractions[i-1]-0)<<"\n";
    } else {
        cout<<totaltime-abs(attractions[i-1]-attractions[i])-abs(attractions[i]-attractions[i+1])+abs(attractions[i-1]-attractions[i+1])<<"\n";
    }
}

return 0;
}