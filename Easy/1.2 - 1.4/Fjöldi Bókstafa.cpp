#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(string s) {
	int cnt = 0;
	FOR (i, 0, s.size()) {
		if (isalpha(s[i])) cnt++;
	}
	cout << cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    
	solve(s);
}