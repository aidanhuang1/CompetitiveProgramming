#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
string notperf; int n, cnt=0; 

void findoff(int x) {
    int shortestdist = (int)2e6;
    for (int i=0; i<2*n; i++) {
        if (i%2==0 && notperf[i]=='U') {
            shortestdist = min(shortestdist, i-x);
        }
    }
    cout<<x+shortestdist<<endl;
    cnt+=abs(shortestdist);
    // notperf[x+shortestdist] = 'a';
    char test[] = {notperf};  
    cout<<notperf<<endl;
    // swap(notperf[x+shortestdist], notperf[x]);
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n;
cin>>notperf;
for (int i=0; i<notperf.length(); i++) {
    if (notperf[i]=='I' && i%2!=0) {
        findoff(i);
    }
}
cout<<cnt<<endl;
 
return 0;
}

/*
IIIIUUUU
IIIUIUUU
IIUIIUUU
IUIIIUUU
IUIIUIUU
IUIUIIUU
IUIUIUIU
*/