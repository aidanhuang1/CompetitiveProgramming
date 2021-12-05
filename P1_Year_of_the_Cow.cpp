#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int n;
unordered_map<string, int> cows, cowtime, zodiact, year;
vector<string> lis;
vector<string> zodiacs = {"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"};

int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>n;
for (int i=0; i<12; i++) {
    zodiact[zodiacs[i]] = i;
}
for (int i=0; i<=n; i++) {
    vector<string> v;
    string cow1, cow2, prevornext, zodiac;
    cin>>cow1;
    for (int i=1; i<=3; i++) {
        cin>>prevornext;
    }
    cin>>zodiac;
    for (int i=1; i<=3; i++) {
        cin>>cow2;
    }
    int y1 = zodiact[zodiac], y2 = year[cow2];
    if (prevornext=="previous") {
        int d = (y2-y1+11)%12+1;  
        year[cow1] = y1;
        cowtime[cow1] = cowtime[cow2]-d;
    } else if (prevornext=="next") {
        year[cow1] = y1;
        int d = (y1-y2+11)%12+1;
        cowtime[cow1] = cowtime[cow2]+d;
    }
}
cout<<abs(cowtime["Elsie"])<<endl;
 
return 0;
}