#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(string s) {
	int v = 0;
	FOR (i, 0, s.size()) {
		if (s[i] == 'a' || s[i] == 'i' ||
			s[i] == 'u' || s[i] == 'e' ||
			s[i] == 'o') v++;
	}
	cout << v;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    getline(cin, s);
	
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	solve(s);
}