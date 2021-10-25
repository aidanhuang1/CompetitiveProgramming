#include <bits/stdc++.h> 
#include <iostream>
#define pb push_back
#define mp make_pair
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

ll n;
cin>>n;
vector<ll> freq(1001);
for (int i=0; i<n; i++)  {
    ll r;
    cin>>r;
    freq[r]++;
}
vector<ll> freqcopy = freq;
sort(freqcopy.begin(), freqcopy.end());

ll mostfreq = freqcopy[1000], secondfreq = freqcopy[999];
vector<ll> list;
if (mostfreq==secondfreq) {
    for (int i=0; i<=1000; i++) {
        if (freq[i]==mostfreq) {
            list.push_back(i);
        }
    }
    sort(list.begin(), list.end());
    cout << list[(list.size()-1)]-list[0] << endl;

} else { //there are multiple second frequencies
    ll largest = 0;
    for (int i=0; i<=1000; i++) {
        if (freq[i]==mostfreq) {
            largest = i;
        } else if (freq[i]==secondfreq) {
            list.push_back(i);
        }
    }
    sort(list.begin(), list.end());
    cout << max(abs(largest-list[0]), abs(largest-list[(list.size()-1)])) << endl;
}
 
return 0;
}