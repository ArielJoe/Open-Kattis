#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(int n) {
	int ttl = 0;
	FOR (i, 0, n) {
		int j;
		cin >> j;
		ttl += j;
	}
	cout << ttl - (n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
	solve(n);
}