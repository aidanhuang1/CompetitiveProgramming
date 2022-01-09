#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
// freopen("helpcross.in", "r", stdin);
// freopen("helpcross.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int c, n; cin>>c>>n;
multiset<int> chickens;
vector<pair<int, int>> cows;
for (int i=0; i<c; i++) {
    int a; cin>>a; chickens.insert(a);
}
for (int i=0; i<n; i++) {
    int a, b; cin>>a>>b;
    cows.push_back({a,b});
}
sort(cows.begin(), cows.end(), [](const pair<int, int>& a, const pair<int, int>& b){return a.second<b.second;});
int ans = 0;    
for (auto i: cows) {
    // auto temp1 = chickens.lower_bound(i.first);
    // if (temp1!=chickens.end() && *temp1<=i.second) {
    //     ans++;          
    //     chickens.erase(temp1);
    // }

    //This works too, it didn't work when you did chickens.erase(temp1);
    //THERE IS A DIFFERENCE BETWEEN LOWER_BOUND AND UPPER_BOUND
    int temp1 = *chickens.lower_bound(i.first);
    cout<<temp1<<" "<<i.first<<endl;
    if (temp1>=i.first && temp1<=i.second) { //i.second is the ending time
        ans++;          
        chickens.erase(chickens.find(temp1));
    }
    


}

cout<<ans<<endl;
return 0;
}