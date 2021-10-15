#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;

vector<vector<ll>> friends;

ll findtime(ll mid) {
    ll temptime = 0;
    for (int i=0; i<friends.size(); i++) {
        ll timeforfriendtowalk = 0;
        // if (mid>=friends[i][0]) { //if the friend is to the left of the concert
        ll distance = abs(mid-friends[i][0])-friends[i][2]; //how far the friend has to walk
        if (distance>0) { //friend is outside the hearing range, else we can ignore
            // totaltime_leftside += distance*friends[i][1];
            temptime += distance*friends[i][1];
        }
        }
        // else if (mid<friends[i][0]) { //if the friend is to the right of the concert
        //     ll distance = abs(mid-friends[i][0])-friends[i][2]; //how far the friend has to walk
        //     if (distance>0) { //friend is outside the hearing range, else we can ignore
        //         totaltime_rightside += distance*friends[i][1];
        //     }
        // }
        return temptime;
    }
    

 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

ll n;
cin >> n;
friends.resize(n, vector<ll>(n));
for (int i=0; i<n; i++) {
    for (int j=0; j<3; j++) {
        cin >> friends[i][j];
    }
}

ll left = 0, right = 2e9, besttime = 2e9, currentpos=0;
while(left<=right) {
    ll mid = (left+right)/2; //we test a position for the concert
    currentpos = findtime(mid);
    ll immediateleft = findtime(mid-1), immediateright = findtime(mid+1);

    if (immediateleft >= currentpos && immediateright>= currentpos) {
        break;
    } else if (immediateleft>currentpos) {
        left=mid+1;
    } else if (immediateright>currentpos) {
        right=mid-1;
    }
}
cout << currentpos << endl;

return 0;
}