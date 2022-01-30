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

int highestafreq = -1, highestafreqchar; //string a
int lowestatimesb = INF, lowestatimesbchar;
int crossings = 0;
for (int i=0; i<26; i++) {
    crossings+=(freqa[i]*freqb[i]);
    if (highestafreq<freqa[i]) {
        highestafreq = freqa[i];
        highestafreqchar = i;
    }
    if ((freqa[i]>0 || freqb[i]>0) && freqa[i]*freqb[i]<lowestatimesb) {
        lowestatimesb = freqa[i]*freqb[i];
        lowestatimesbchar = i;
    }
}
crossings+=highestafreq;

if (freqa[lowestatimesbchar]>0 && freqb[lowestatimesbchar]>0)
crossings-=(max(freqa[lowestatimesbchar], freqb[lowestatimesbchar]));

cout<<crossings<<endl;

return 0;
}