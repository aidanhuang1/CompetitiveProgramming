#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int n; vector<int> v(n);
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n;
int n1 = 2, n2=1;
printf("! 2 1");
for (int i=0; i<n; i++) {
    int x;
    cin>>x;
    v[x] = n1+n2;
    printf("? %d %d", (i+1),n);

}
cout<<"! ";
for(auto i: v) {
    cout<<i<<" ";
}
cout<<endl;
return 0;
}