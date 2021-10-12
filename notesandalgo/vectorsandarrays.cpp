#include <bits/stdc++.h> 
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

//assign() sets the size to n and all element values to x, 
//whereas resize() sets the size to n and only new element values to x.
vector<int> a;
a.resize(10, 9);
a[0] = 1;
for (int i=0; i<a.size(); i++) {
    printf("%d ", a[i]);
}
cout << endl;



vector<int> b;
a[0] = 1;
b.assign(10, 9);
for (int i=0; i<b.size(); i++) {
    printf("%d ", b[i]);
}
cout << endl;




vector<int> test;
 //this sets the size of the vector to 11, and fill all the empty elements with 1
test.resize(10, 1);
test[0] = 2;
for (int i=0; i<test.size(); i++) {
    cout << test[i] << endl;
}


vector<vector<int>> test2;
test2.resize(10, vector<int>(10)); //10 x 10
for (vector<int> i: test2) {
    for (int j: i) {
        cout << j << " ";
    }
    cout << endl;
}





return 0;
}