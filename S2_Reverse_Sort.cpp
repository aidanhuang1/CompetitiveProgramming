#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

int n, c=0; cin>>n;

int array[n];
for (int i=0, x; i<n; i++) {
    cin>>x;
    array[i] = x;
}
for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            if (array[j] < array[j + 1]) {
                c++;
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
cout<<c<<endl;
 
return 0;
}