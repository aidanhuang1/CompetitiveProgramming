#include <bits/stdc++.h>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> v;
    v.push_back(12);
    v.push_back(13); 
    v.insert(v.begin(), 14);

    for (int i=0; i<v.size(); i++)  {
        printf("%d", v[i]);
    }

    for (const int &i: v) {
        printf("\n%d", i);
    }
    return 0;

}