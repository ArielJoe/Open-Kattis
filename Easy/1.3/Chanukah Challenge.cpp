#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(int cnt) {
	int cdl[cnt];
	FOR (i, 0, cnt) {
		int id, d;
		cin >> id >> d;
		
		int ttl = 0;
		FOR (j, 1, d + 2) {
			ttl += j;
		}
		cdl[i] = ttl;
	}
	FOR (i, 0, cnt) {
		printf("%d %d\n", i + 1, cdl[i] - 1);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cnt;
    cin >> cnt;
    
	solve(cnt);
}