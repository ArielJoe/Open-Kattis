#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

string solve(int a, vector<string> n, vector<int> g) {
	int idx = 0;
		
	FOR (i, 1, a) {
		if (g[i] > g[idx]) {
			idx = i;
		}
	}
	return n[idx];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    vector<string> n;
    vector<int> g;
    cin >> a;
    
    FOR (i, 0, a) {
        string nm;
        int gf;
        cin >> nm >> gf;
        n.push_back(nm);
        g.push_back(gf);
	}
    
	cout << solve(a, n, g);
}