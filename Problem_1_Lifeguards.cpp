#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

struct event{
    int start;
    int cowid;
    bool startorend; //0 for start, 1 for end
};

vector<event> cows;

int main() {
//freopen(, , stdin);
//freopen(, , stdout);
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
for (int i=0; i<n; i++) {
    int a, b; cin>>a>>b;
    cows.push_back({a, i, 0});
    cows.push_back({b, i, 1});

}
sort(cows.begin(), cows.end(), [](const event& a, const event& b) {return a.start<b.start; });

set<int> activecows;
int prev = 0, totaltime = 0, curtime = 0;
vector<int> alonetime(n, 0);
for (auto i: cows) {
    curtime = i.start;
    if (activecows.size()>0) {
        totaltime += curtime-prev;
    }
     if (activecows.size()==1) {
        alonetime[*activecows.begin()] += curtime-prev;
    }
    if (i.startorend==0) {
        activecows.insert(i.cowid);
    } else if (i.startorend==1) {
        activecows.erase(i.cowid);
    }
    prev = curtime;
}
int minalonetime = (int) 1e9;
for (int i=0; i<n; i++)  {
    minalonetime = min(minalonetime, alonetime[i]);
}
cout<<totaltime-minalonetime<<endl;

return 0;
}