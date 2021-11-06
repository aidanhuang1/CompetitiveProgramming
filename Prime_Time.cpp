#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
int factors[10001]; 
for (int i=0, n, x; i<5; i++) {
    memset(factors, 0, sizeof(factors));
    cin>>n; x=n;
    for (int j=2; j<=n; j++) {
        if (isPrime(j)) {
            factors[j]++;
        } else {
            int num = j;
           for (int k=2; k<=j; k++) {
               while(isPrime(k) && num>1) {
                   if (num%k==0) {
                       num/=k;
                       factors[k]++;
                   }
               }
           }
        }
    }
    string temp;
    for (int j=2; j<=n; j++) {
        if (factors[j]>0)  {
            temp += (to_string(j)+"^"+to_string(factors[j])+" * ");
        }
    }
temp.erase(temp.length()-2, temp.length());
    cout<<temp<<endl;

}
return 0;
}