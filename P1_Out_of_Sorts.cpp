#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int n; int arr[MM];

int main() {
cin.sync_with_stdio(0);
cin.tie(0);
cin>>n;
for (int i=0; i<n; i++) {
    cin>>arr[i];
}
int cnt = 0;    
bool sorted = false;
while(!sorted) {
    sorted = true;
    cnt++;
    for (int i=0; i<n-1; i++) {
        if (arr[i+1]<arr[i]) {
            swap(arr[i],arr[i+1]);
            sorted = false;
        }
    }
}cout<<cnt<<"\n";


return 0;
}