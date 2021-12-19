#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;

int n; vector<int> cows;

int check(int start, int direction) {
	int radius = 1;
	int prev = start;

	while (true) {
		int next = prev;
		// Getting the furthest explosion index without exceeding the current radius
		while (next + direction >= 0 && next + direction < n 
			&& abs(cows[next + direction] - cows[prev]) <= radius) {
			next += direction;
		}

		// We didn't find a new haybale, so the chain explosion is over
		if (next == prev) {
			break;
		}

		// Update our previous explosion and increment radius
		prev = next;
		radius++;
	}
	return abs(prev - start);
}


int main() {
freopen("angry.in", "r", stdin);
freopen("angry.out", "w", stdout);
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n; for (int i=0, a; i<n; i++) { cin>>a; cows.push_back(a);};
sort(cows.begin(), cows.end());
int best = 0;
for (int i=0; i<n; i++) {
    best = max(best, check(i, -1) + check(i, 1) + 1);
}
cout<<best<<"\n";

return 0;
}