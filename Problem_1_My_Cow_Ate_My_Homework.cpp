#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;


int main() {
freopen("homework.in", "r", stdin);
freopen("homework.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
vector<int> scores(n);
for (int i=0; i<n; i++) {
    cin>>scores[i];
}
vector<int> lowestscores(n);
int templowest = (int)1e5;
for (int i=n-1; i>=0; i--) {
    templowest = min(templowest, scores[i]);
    lowestscores[i] = templowest;
}
vector<int> ans;        
int tempsum = scores[n-1];
double tempkans = 0;int count = 1;
for (int i=n-2; i>0; i--) { //you can remove at most n-2 and at least 1
    tempsum+=scores[i];
    double temp = ((tempsum-lowestscores[i])/(1.0*count));
    // cout<<tempsum-lowestscores[i]<<" "<<n-i<<endl;
    if (temp>tempkans) {
        ans.clear();
        ans.push_back(i);
        tempkans = temp;
    } else if (temp==tempkans) {
        ans.push_back(i);
    }count++;
}
sort(ans.begin(), ans.end());
for (auto i: ans) cout<<i<<"\n";


return 0;
}