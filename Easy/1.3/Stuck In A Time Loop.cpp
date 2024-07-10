#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(int cnt) {
	FOR (i, 1, cnt + 1) {
		printf("%d Abracadabra\n", i);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cnt;
    cin >> cnt;
    
	solve(cnt);
}