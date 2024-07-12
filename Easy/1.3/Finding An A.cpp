#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>
#include <iomanip>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(string s) {
	int start = 0;
	FOR (i, 0, s.size()) {
		if (s[i] == 'a') start = 1;
		if (start) cout << s[i];
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
	
	solve(s);
}