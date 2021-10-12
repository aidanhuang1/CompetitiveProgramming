#include <bits/stdc++.h> 
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

/*
We create vector of vectors,
when we reach a new index, we will add it to one of the vectors
but we must look at the ends of each vector
and find which vector we should add it to
this is an example of a predicate
*/

ll n;
cin >>n;
vector<vector<ll>> arrays (n);
arrays[0].push_back(12);
for (int i=0; i<n; i++) {
    for (int i=0; i<sizeof(arrays); i++) {
        
    }
}
 
return 0;
}