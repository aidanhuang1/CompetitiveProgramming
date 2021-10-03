#include <bits/stdc++.h> 
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

//Code exceeds time limit
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, k;
cin >> n >> k;
int array[n];
for (int i=0; i<n; i++) {
    cin >> array[i];
}
sort(array, array+n);
while(k>0) {    
    array[(0+n)/2]++;
    k--;
    sort(array, array+n);
}
cout << array[(0+n/2)];

return 0;
}