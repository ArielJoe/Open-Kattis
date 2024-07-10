#include <iostream>
#include <vector>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(string a) {
	FOR (i, 0, a.size()) {
		if (a[i] != ' ') cout << a[i];
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string a;
    getline(cin, a);
    
	solve(a);
}