#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

vector<string> cows = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
vector<string> a, b;
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n; string name;
sort(cows.begin(), cows.end());
    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> name;
        a.push_back(name);
        for(int j=0; j<5; j++) cin >> name;
        b.push_back(name);
    } 
    do {
        bool valid = true;
        for(int i=0; i<n; i++) {
            string x = a[i], y = b[i];
            if(abs(find(cows.begin(),cows.end(),x) - find(cows.begin(),cows.end(),y)) != 1) { 
                valid = false; 
                break;
            }
        }
        if(valid) {
            for(string x: cows) cout << x << endl;
            break;
        }
    }while(next_permutation(cows.begin(), cows.end()));

 
return 0;
}