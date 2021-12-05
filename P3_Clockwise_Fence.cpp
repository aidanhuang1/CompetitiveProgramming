#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int n; 

int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>n;
for (int i=0; i<n; i++) {
    string x; cin>>x; int CW = 0, CCW=0;char prevchar;
    for (int j=0; j<x.length(); j++) {
        if (prevchar=='N') {
            if (x[j]=='E') CW++;
            else if (x[j]=='W') CCW++;
        }
        else if (prevchar=='E') {
            if (x[j]=='S') CW++;
            else if (x[j]=='N') CCW++;
        }
        else if (prevchar=='S') {
            if (x[j]=='W') CW++;
            else if (x[j]=='E') CCW++;
        }
        else if (prevchar=='W') {
            if (x[j]=='N') CW++;
            else if (x[j]=='S') CCW++;
        }
        prevchar = x[j];
    }
    cout<<(CW>CCW ? "CW" : "CCW")<<endl;
}
 
return 0;
}