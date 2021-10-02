#include <bits/stdc++.h>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
/*
a 0 0
ab 0 1
aba 0 2
b 1 1
ba 1 2
a 2 2
*/
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);

    string input;
    int count = 0;
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        for (int j = 0; j < input.length(); j++) {
            string temp = input.substr(i, j);
            cout << temp << endl;
            cout << i+j <<endl;
            cout << i << endl;
            cout << j << endl;
            string temp2 = temp;
            reverse(temp.begin(), temp.end());
            if (temp == temp2)
            {
                count = max(count, (int)temp.length());
            }
        }
    }
    cout << count << endl;
    return 0;
}