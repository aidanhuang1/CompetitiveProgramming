#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

void fun(int i, int n, vector<int> &comb){
    if(i > n){
        for(int x: comb) cout << x << " ";
        cout << endl; return;
    }
    fun(i+1, n, comb); //not choose i
    comb.push_back(i); fun(i+1, n, comb); comb.pop_back(); //choose i
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n; vector<int> comb;
    cin >> n;
    fun(1, n, comb);
 
return 0;
}