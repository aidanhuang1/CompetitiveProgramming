#include <bits/stdc++.h>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
 
vector<int> adj[1001]; //We predefine the size of the vector
//note that we are doing adj[] instead of simply adj,
//this means that this is a vector array
 
 
int main() {
   cin.sync_with_stdio(0);
   cin.tie(0);
   adj[0].push_back(1);
   adj[1].push_back(2);
   for (vector<int> test : adj) {
       for (int i : test) {
           cout << i << endl;
       }
   }
 
 
   return 0;
}
