#include <bits/stdc++.h> 
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

//Review this problem again
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, k, starting;
cin >>n>>k;
int array[n];
for (int i=0; i<n; i++) {
    cin >> array[i];
    starting = max(starting, array[i]);
}
ll left = starting, right = 1e18, highestsum = 1e18;
while (left <= right) {
    ll mid = (left+right)/2;
    ll division = 1, sum = 0;
    for (int i=0; i<n; i++) {
        if (sum+array[i]>mid) {
            division++;
            sum = 0;
        }
        sum+=array[i];
    }
    if (division>k) { //if we cannot 
        left = mid+1;
    } else { //if we can do this
        highestsum = min(highestsum, mid);
        right = mid-1;
    }
}


cout << highestsum << endl;
return 0;
}