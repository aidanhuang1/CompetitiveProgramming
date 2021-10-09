#include <bits/stdc++.h> 
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int array[] = {1,2,3,4,5,6,7};

int l = 0, r = sizeof(array);
while (l <= r) {
    int mid = (l+r)/2;
    if (array[mid]==2) {
        cout << mid << endl;
        break;
    } else if (array[mid] < 2) {
        l = mid+1;
    } else if (array[mid] > 2) {
        r = mid-1;
    }
}
 
return 0;
}