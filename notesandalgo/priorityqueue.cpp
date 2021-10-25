#include <bits/stdc++.h> 
#include <iostream>
#define pb push_back
#define mp make_pair
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

struct cow {
    int x, y;
    bool operator<(cow const& c) const {
        return x<c.x;
    }
};
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

priority_queue<cow> pq;
pq.push(1, 2); pq.push(2); pq.push(0);
 
return 0;
}