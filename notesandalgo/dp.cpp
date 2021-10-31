#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
//This is the recursive method
int fib(int n) {
    if (n<=1) {
        return n;
    }
    return fib(n-1)+fib(n-2);

}


//DP method
int dp[1000];
int fib2(int n) {
    dp[0] = 0;
    dp[1] = 1;
    for (int i=2; i<=n; i++) {
        dp[i] = dp[i-1]+dp[i-2]; 
    }
    return dp[n];
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cout<<fib(5)<<endl;
cout<<fib2(5)<<endl;
return 0;
}