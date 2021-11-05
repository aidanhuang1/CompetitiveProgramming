#include <bits/stdc++.h>
using namespace std;
struct inter{
    int x, y, a, b;
    bool operator < (const inter &p) const {
        return x <p.x || x == p.x && y < p.y;
    }
};
bool cmp(inter p, inter q) {// true -> p goes before q, false  -> p goes after q
    if(p.x != q.x) return p.x < q.x;
    return p.y < q.y;
}
int main(){
    inter a = inter{5, 5, 1, 2};
    inter b = inter{8, 5, 2, 3};
    inter c = inter{5, 4, 2, 4};
    inter d = inter{8, 2, 1, 4};
    vector<inter> vec = {a, b, c, d};
    //way 1: use a compare function
    //sort(vec.begin(), vec.end(), cmp);
    //way 2: use lambda
//    sort(vec.begin(), vec.end(), [](inter p, inter q){
//         return p.x<q.x || p.x==q.x && p.y < q.y; });
    //way 3: overload < operator
    sort(vec.begin(), vec.end());
    for(inter e : vec){
        cout << e.x << " " << e.y << " " << e.a << " " << e.b << endl;
    }
}