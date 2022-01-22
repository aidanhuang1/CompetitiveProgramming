#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 5e3+1;

int n, t, k;
int adj[MM][MM], dist[MM], purchase[MM];
bool vis[MM];
int main() {
cin.sync_with_stdio(0);
cin.tie(0);

cin>>n>>t;
for (int i=0; i<=n; i++) {
    for (int j=0; j<=n; j++) {
        adj[i][j] = 0;
    }
}
for (int i=0, x, y, w; i<t; i++) {
    cin>>x>>y>>w;
    adj[x][y] = adj[y][x] = w;
}
memset(purchase, INF, sizeof purchase);
cin>>k; 
for (int i=0, z, pz; i<k; i++) {
    cin>>z>>pz;
    
    purchase[z] = pz;
}
memset(dist, INF, sizeof dist); memset(vis, 0, sizeof vis);
int d;
cin>>d;
dist[d] = 0;
int count = 0;
while (count < n)
	{
	    // Step 2: Choose the next city:
	    // the one with the smallest dist that hasn't been vis.
	    int small = INFINITY;
	    int city = 1;
	    for (int i = 1 ; i <= n ; i++)
	    {
		if (!vis [i] && dist [i] < small)
		{
		    small = dist [i];
		    city = i;
		}
	    }
	    
	    // Step 3: for all cities (i) connected to the city in question,
	    //         update their distance to city. It is the the distance
	    //         to the city plus the distance along the edge from
	    //         the ith city to the city, if that is smaller than
	    //         what is already stored in dist for that city.
	    vis [city] = true;
	    count++;    
	    for (int i = 1 ; i <= n ; i++)
		if (adj [city] [i] > 0 && !vis [i])
		    if (dist [i] > dist [city] + adj [city] [i])
			dist [i] = (char) (dist [city] + adj [city] [i]);
	}
int ans = INF;
for (int i=1; i<=n; i++) {
    ans = min(ans, dist[i]+purchase[i]);
}
cout<<ans<<endl;
return 0;
}