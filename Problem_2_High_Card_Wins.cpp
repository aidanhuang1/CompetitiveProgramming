#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
freopen("highcard.in", "r", stdin);
freopen("highcard.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
bool dealt[n*2+1];
vector<int> elsiedealt;
memset(dealt, 0, sizeof dealt);
for (int i=0; i<n; i++) {
    int elsie; cin>>elsie;
    elsiedealt.push_back(elsie);
    dealt[elsie] = true;
}
set<int> cardsleft;
for (int i=1; i<=2*n; i++) {
    if (!dealt[i]) cardsleft.insert(i);
}
int ans = 0;
for (int i=0; i<n; i++) {
    int temp = *cardsleft.upper_bound(elsiedealt[i]);
    if (elsiedealt[i]<temp) {
        ans++;
        cardsleft.erase(temp);
    } else {
        cardsleft.erase(cardsleft.begin());
    }
}
cout<<ans<<"\n";




return 0;
}