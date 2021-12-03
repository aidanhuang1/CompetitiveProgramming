#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

bool check(int a, int b, int c) {
    while(c>0) {
        if (a<=0){
            return false;
        }
        a--; c--;
    }
    b%=2;
    if (b==1) {
        b=0;
        a-=2;
    }
    if (a<0 || a%2!=0) {
        return false;
    }
    return true;
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n; cin>>n;
for (int i=0, a, b, c; i<n; i++) {
    cin>>a>>b>>c;
    cout<<(check(a, b, c)?"YES":"NO")<<endl;
}
 
return 0;
}