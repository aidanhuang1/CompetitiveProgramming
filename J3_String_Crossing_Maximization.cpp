#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;



int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int s, t; cin>>s>>t;
string a, b; cin>>a>>b;
vector<int> freqa(26), freqb(26); 
for (auto i: a) {
    freqa[i-'A']++;
}
for (auto i: b) {
    freqb[i-'A']++;
}


int ans = 0;

for (int i=0; i<26; i++) {
    freqb[i]--;
    for (int j=0; j<26; j++) {
        freqb[j]++;
        int temp = 0;
        for (int k=0; k<26; k++) {
            if (freqa[k]>0 && freqb[k]>0)
            {temp+=(freqa[k]*freqb[k]);
            ans = max(ans, temp);}
        }
        freqb[j]--;
    }
    freqb[i]++;
}
cout<<ans<<endl;

return 0;
}