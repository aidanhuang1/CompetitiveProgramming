#include <bits/stdc++.h>
using namespace std;

struct Edge {
	int a,b,w;

};

bool cmp(const Edge& x, const Edge& y) { return x.a > y.a; }

int main() {
	int M = 4;
	vector<Edge> v;
	for (int i = 0; i < M; ++i) {
		int a,b,w; cin >> a >> b >> w;
		v.push_back({a,b,w});
	}
	// sort(begin(v),end(v),[](const Edge& x, const Edge& y) { return x.w < y.w; });
    //or 
    sort(begin(v), end(v), cmp);
	// for (Edge e: v) cout << e.a << " " << e.b << " " << e.w << "\n";
    cout<<v[0].a<<endl;
    return 0;
}