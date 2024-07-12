#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(string s) {
	int b = 0, k = 0;
	FOR (i, 0, s.size()) {
		if (s[i] == 'b') b++;
		if (s[i] == 'k') k++;
	}
	if (b > k) cout << "boba";
	else if (k > b) cout << "kiki";
	else if (b == k && b != 0) cout << "boki";
	else cout << "None";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    
	solve(s);
}