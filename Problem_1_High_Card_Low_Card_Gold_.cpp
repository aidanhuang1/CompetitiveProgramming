#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int n; 


int main() {
freopen("cardgame.in", "r", stdin);
freopen("cardgame.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);
int ans = 0;
cin>>n;
vector<int> elsiefirstpart, elsiesecondpart;
bool dealt[n*2+1]; memset(dealt, 0, sizeof dealt);
for (int i=0; i<n/2; i++) {
    int a; cin>>a;
    elsiefirstpart.push_back(a);
    dealt[a] = 1;
}
for (int i=n/2; i<n; i++) {
    int a; cin>>a;
    elsiesecondpart.push_back(a);
    dealt[a] = 1;
}

vector<int> bessie;
for (int i=1; i<=n*2; i++) {
    if (!dealt[i]) bessie.push_back(i);
}
set<int> bessiefirstpart, bessiesecondpart;
sort(bessie.rbegin(), bessie.rend());
for (int i=0; i<n/2; i++) {
    bessiefirstpart.insert(bessie[i]);
}
for (int i=n/2; i<n; i++) {
    bessiesecondpart.insert(bessie[i]);
}   
for (int i=0; i<n/2; i++) {
    int temp = *bessiefirstpart.upper_bound(elsiefirstpart[i]);
    if (temp>elsiefirstpart[i]) {
        ans++; 
        bessiefirstpart.erase(temp);
    } else {
        bessiefirstpart.erase(bessiefirstpart.begin());
    }
}
for (int i=n/2; i<n; i++) {
    int temp = *bessiesecondpart.lower_bound(elsiesecondpart[i]);
    if (temp<elsiesecondpart[i]) {
        ans++; 
        bessiesecondpart.erase(temp);
    } else {
        bessiesecondpart.erase(bessiesecondpart.begin());
    }
}
cout<<ans<<"\n";


return 0;
}