#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int n, l;

string reverseornot(string s1, string s2) {
    for (int i=0; i<l; i++) {
        if (s1[i]>s2[i]) return s2;
        else if (s1[i]<s2[i]) return s1;
    }
    return s1;
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

vector<string> words;
cin>>n>>l;
for (int i=0; i<n; i++) {
    string a; cin>>a;
    string temp = a;
    reverse(temp.begin(), temp.end());
    words.push_back(reverseornot(a, temp));
}
sort(words.begin(), words.end());
for (auto i: words) cout<<i;
cout<<"\n";
return 0;
}