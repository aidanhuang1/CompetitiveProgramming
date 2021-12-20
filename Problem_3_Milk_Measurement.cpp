#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
freopen("measurement.in", "r", stdin);
freopen("measurement.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
int mildred = 7, elsie = 7, bessie = 7;
vector<pair<int, pair<string, int>>> v;
for (int i=0; i<n; i++) {
    int a, c; string b; cin>>a>>b>>c;
    v.push_back({a, {b, c}});
}
sort(v.begin(), v.end());
vector<string> cows = {"Bessie", "Elsie", "Mildred"};
sort(cows.begin(), cows.end());
int cnt=0;
for (auto i: v) {
    vector<string> temp;
    if (i.second.first=="Mildred") {
        mildred+=i.second.second;
    } else if (i.second.first=="Elsie") {
        elsie+=i.second.second;
    } else if (i.second.first=="Bessie") {
        bessie+=i.second.second;
    }
    int highest = max(mildred, max(elsie, bessie));
    if (elsie==highest) temp.push_back("Elsie");
    if (mildred==highest) temp.push_back("Mildred");
    if (bessie==highest) temp.push_back("Bessie");
    sort(temp.begin(), temp.end());
    
    if (temp!=cows) cnt++;
    cows = temp;
}
cout<<cnt<<"\n";


return 0;
}