#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(int cnt) {
	float t = 0;
	FOR (i, 0, cnt) {
		float q, y;
		cin >> q >> y;
		t += (q * y);
	}
	printf("%.3f", t);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cnt;
    cin >> cnt;
    
	solve(cnt);
}