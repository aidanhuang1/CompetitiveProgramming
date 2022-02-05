#include <iostream>
#define ll long long
using namespace std;
const int MAXN = 1e5 + 1;
int n;
bool itself = true;
ll store[MAXN];
pair<ll, ll>one = {MAXN, 0};
int main() {
  ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  store[0] = MAXN;
  cin >> n;
  for(int z = 2; z <= n; z++){
    cout << "? " << z << " " << 1 << '\n' << flush;
    cin >> store[z];
    one = min(one, {store[z], z});
    if(store[z] > n) itself = false;
  }
  ll base;
  if(itself) base = 1;
  else base = store[one.second];
  cout << "! " << base << flush;
  for(int z = 2; z <= n; z++)
    cout << " " << store[z] / base << flush;
  cout << '\n';
}