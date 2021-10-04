#include <bits/stdc++.h> 
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

ll n, m, c;
vector<ll> arrivaltime;

bool valid(ll mid) { //mid is the maximum time given
    ll how_many_in_the_bus = 0 , maximum_time_sofar = 1e18, left = 0, right = 0, temptime = 0, num_of_buses = 1;
    for (int i=0; i<n; i++) {
        if (temptime + (arrivaltime[i]-arrivaltime[i-1]) > mid || how_many_in_the_bus >=c) { //we create a new bus
            num_of_buses++;
            how_many_in_the_bus = 1;
            maximum_time_sofar = min(maximum_time_sofar, arrivaltime[i]-arrivaltime[left]);
            temptime = arrivaltime[i]-arrivaltime[i-1];
        } else {
            how_many_in_the_bus++;
            temptime += (arrivaltime[i]-arrivaltime[i-1]);
        }
    }
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    


    /*
    Sort the vector first
    left = 1, right = C
    so the mid will be pointer that defines how the minimum maximum time
    we look through the vector making sure our arrival times for the bus passengers does not exceed the mid time
    and does not exceed the capacity of a bus
    */


    
    cin >>n>>m>>c;
    arrivaltime = vector<ll>(n);
    
    for (int i=0; i<n; i++) {
        cin >> arrivaltime[i];
    }
    sort(arrivaltime.begin(), arrivaltime.end());
    ll left = 0, right = 1e18; //could we change right to the last index of arrivaltime?
    while (left <= right) {
        ll mid = (left+right)/2;

    }
    return 0;
}