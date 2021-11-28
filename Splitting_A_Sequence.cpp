#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

int arrsize;
int check(int *array, int largest) {
    int tempnum = 0;
    int cnt = 1;
    for (int i=0; i<arrsize; i++) {
        if (tempnum+array[i]>largest) {
            cnt++;
            tempnum = array[i];
        } else {
            tempnum+=array[i];
        }
    }
    return cnt;
}

int bs(int *array, int n, int m, int maxn, int sum) {
    int left = 0, right = sum;
    while(left<right) {
        int mid = (left+right)/2;
        int subarrs = check(array, mid);
        if (subarrs>m) {
            left=mid+1;
        } else {
            right=mid;
        }
    }
    return left;
}
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
int n, m, sum=0, maxn=0;
cin>>n>>m;
arrsize = n;
int array[n];
for (int i=0; i<n; i++) {
    cin>>array[i]; sum+=array[i];
    maxn = max(maxn, array[i]);
}
cout<<bs(array, n, m, maxn, sum)<<endl;
 
return 0;
}