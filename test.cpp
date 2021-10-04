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

    for (int i = 0; i < v.size(); i++)
    {
        printf("%d", v[i]);
    }

    for (const int &i : v)
    {
        printf("\n%d", i);
    }
    cout << endl;

    queue<int> q;
    q.push(10);
    q.push(12);
    while (!q.empty())
    {
        printf("\n%d", q.front());
        q.pop();
    }

    pair<string, int> pair1 = {"hey", 123};

    cout << pair1.first << endl;
    pair1.second = 321;
    cout << pair1.second << endl;

    cout << endl;
    tuple<string, string, int> tp2 = make_tuple("Hello", "world", 100);
    string s1, s2;
    int x;
    tie(s1, s2, x) = tp2;
    cout << s1 << " " << s2 << " " << x << endl;

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    for (int element : s)
    {
        cout << element;
    }
    cout << endl;
    map<int, int> m;
    m[0] = 1;
    m[1] = 2;
    for (pair<int, int> i : m)
    {
        printf("%d %d \n", i.first, i.second);
    }

    stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    while (!stack.empty())
    {
        cout << stack.top();
        stack.pop();
    }

    queue<int> qu;
    qu.push(12);
    qu.push(13);
    while (!qu.empty())
    {
        cout << qu.front() << endl;
        qu.pop();
    }
    cout << "yes" << endl;

    string a = "test";
    reverse(a.begin(), a.end());
    cout << a << endl;

    string t = a.substr(1,0);
    cout << t << endl;

    cout << sqrt(64) << endl;
    for (int i=0; i<=9; ++i) {
        cout << i << endl;
    }
    cout << 7/3 << endl;
    return 0;
}