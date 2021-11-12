#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

struct data {
    int count;
};

struct CompareByValue {
  bool operator() (const data& a, const data& b) const {
    return a.count < b.count;
  };
}; 

int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
for (int i=0, m, k; i<n; i++) {
    cin>>m>>k;
    map<string, int> list;
    for (int i=0; i<m; i++) {
        string x; cin>>x;
        list[x]++;

    }
    int max=0; string word;
    for (auto i: list)  {
        if (i.second>max) {
            word = i.first;
        }
    }
    

    //use custom comparator to sort by value for the map
    // cout<<list["brown"]<<endl;
    cout<<word<<endl;
    
}

 
return 0;
}