#include <iostream>
#include <algorithm>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define all(A) A.begin(), A.end()
#define pb push_back
#define sz size
#define f first
#define s second


int main () 
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);


    // freopen("rental.in", "r", stdin);
    // freopen("rental.out", "w", stdout);

#define int ll
    int n, m, r;
    cin >> n >> m >> r;

    int C[n];
    for (int i = 0; i < n; i++)
    {
        cin >> C[i];
    }

    pair<int, int> P[m];

    for (int i = 0; i < m; i++)
    {
        cin >> P[i].s >> P[i].f;
    }


    int R[r];
    for (int i = 0; i < r; i++)
        cin >> R[i];

    sort(C, C+n, greater<int>());
    sort(P, P+m, 
            [](pair<int, int> &a, pair<int, int> &b) 
            { return a.f > b.f;}
            );
    sort(R, R+r, greater<int>());


    int mxProfit[n+1]; //prefix sum array
    mxProfit[0] = 0; 

    // milk
    int storeI = 0;

    for (int i = 0; i < n; i++) //iterating through the cows
    {
        mxProfit[i+1] = mxProfit[i];
        while (storeI < m && C[i] > 0) //while the store index is within boundary and the milk generation of each cow
        {
            int used = min(C[i], P[storeI].s); //we take the minimum of the milk generated from that cow and milk buying capacity of that store

            mxProfit[i+1] += P[storeI].f*used;
            C[i] -= used;
            P[storeI].s -= used;

            if (P[storeI].s == 0) //if we have used up the milk buying capacity from one store
                storeI++;
        }
    }
    //at this point we have the maximum profit in the prefix sum array, if we choose i number of cows to use for milking

    // rent 
    int rentSoFar = 0;

    int rI = 0, i = n-1;

    while (rI < r && i >= 0) //while the renter index is lower and the i index 
    {
        rentSoFar += R[rI];
        mxProfit[i] += rentSoFar;
        rI++, i--;
    }


    int res = *max_element(mxProfit, mxProfit+n+1);
    cout << res;
    


}