#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int N, T, M, ans;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>N>>T>>M;
for (int i=0, t, s, d; i<M; i++) { //loop individuals
    cin>>t>>s>>d; 
    if (s>d) { 
        s = 2*N-s; 
        d = 2*N-d;
    }
    while (t>s*T) { 
        t-=2*N*T; 
    }
    ans += d*T - t;
}
cout<<ans<<endl;
return 0;   
}