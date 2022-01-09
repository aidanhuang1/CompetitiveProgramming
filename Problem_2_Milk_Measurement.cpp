#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
  cin.tie(0)->sync_with_stdio(0);
//   freopen("measurement.in" , "r", stdin );
//   freopen("measurement.out", "w", stdout);
  int n, g;
  cin >> n >> g;
  vector<vector<int>> v(n);
  for (auto &i : v) {
    int day, id, milk;
    cin >> day >> id >> milk;
    i = vector<int>({day, id, milk});
  }
  sort(v.begin(), v.end());
  int ans = 0, maxMilk = 0, cnt = n;
  map<int,int> mem; 
  multiset<int> milk;
  for (int i = 1; i <= n; i++) {
    mem[i] = 0; //just set everything to 0, not g because setting everything to g would unessecarily complicate things
    milk.insert(0);
  }
  for (auto &i : v) {
    int id = i[1], addMilk = i[2], oldMilk = mem[id]; //oldMilk represents the previous milk
    milk.erase(milk.find(oldMilk)); //removes the first instance of oldMilk
    mem[id] += addMilk; //add to memory the milk change for that cow
    milk.insert(mem[id]); //add it to the multiset
    if (mem[id] > maxMilk) { //if the current milk production for that cow is greater than the maximum milk production of all cows
      if (cnt != 1 || oldMilk != maxMilk) { //if the number of maximum cows is not 1, or the previous milk does not equal max milk generated
          ans++;
      }
      maxMilk = max(maxMilk, mem[id]);
      cnt = 1; //the number of cows with maxMilk
    }


    else if (mem[id] == maxMilk) { //else if the milk production of that cow is equal to the current maximum production
      cnt++; //we just add another cow to the counter of maxMilk production
      ans++; //we add a cow to ans because we have to change the display to render the new cow as well
    }
    else if (oldMilk == maxMilk) { //else if the old recorded milk production for that was the maxMilk, but maybe the new recorded
    //milk production was less than the old recorded milk production. 
      maxMilk = *milk.rbegin(); //gets the last element in the multiset
      int wascnt = cnt; //gets the current number of cows who have maxMilk
      cnt = milk.count(maxMilk); //the number of cows in the multiset with maxMilk
      if (wascnt != 1 || cnt != 1 || mem[id] != maxMilk) { //if current number of 
          ans++;
      }
    }
  }
  cout << ans << '\n';
}