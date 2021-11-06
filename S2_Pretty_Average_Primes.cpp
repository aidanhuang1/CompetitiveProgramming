#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i < sqrt(n)+1; i++)
        if (n % i == 0)
            return false;
    return true;
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int t;cin>>t;
for (int i=0, x; i<t; i++) {
    cin>>x;
    if (isPrime(x)) {
        cout << x << " "<<x <<endl;
    } else {
        int a=x-1, b=x+1;
        while(true) {
            if (!isPrime(a) || !isPrime(b)) {
                a--; b++;
            } else {
                cout<<a<<" "<<b<<endl;
                break;
            }
        }
    }
}


 
return 0;
}