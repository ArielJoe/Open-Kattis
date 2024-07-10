#include <iostream>
#include <vector>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(string word) {
	FOR (i, 0, 3) {
		cout << word << ' ';
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string word;
    cin >> word;
    
	solve(word);
}