#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int n;
vector<int> attractions;

int s(int cancel) {
    int timeelapsed = 0, previousattractionposition = 0;
    for (int i=0; i<=n; i++) {
        if (cancel==i) continue;
        timeelapsed+=abs(previousattractionposition-attractions[i]);
        previousattractionposition = attractions[i];
    }
    return timeelapsed;
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n;
for (int i=0; i<n; i++) {
    int x; cin>>x;
    attractions.push_back(x);
}
attractions.push_back(0);
for (int i=0; i<n; i++) { //iterate through cancelling attraction i
    cout<<s(i)<<endl;
}
return 0;
}