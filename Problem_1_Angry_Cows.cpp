#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int n, k;
vector<int> cows;

bool s(int power)  {
    int startcow = cows[0], endcow = startcow+(power*2), sections = 1;
    int cowpos = 0;
    while (cowpos<n) {
        if (cows[cowpos]>=startcow && cows[cowpos]<=endcow) {
            cowpos++;
        } else {
            sections++;
            startcow = cows[cowpos];
            endcow = startcow+(power*2);
        }
    }
    if (sections<=k) return true;
    return false;
}

int main() {
freopen("angry.in", "r", stdin);
freopen("angry.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);
cin>>n>>k;
int maxn = 0;
cows.resize(n);
for (int i=0; i<n; i++) {
    cin>>cows[i];
    maxn = max(cows[i], maxn);
}
sort(cows.begin(), cows.end());

int left = 0, right = maxn;
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