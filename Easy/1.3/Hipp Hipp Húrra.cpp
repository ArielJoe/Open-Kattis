#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(string str, int cnt) {
	FOR (i, 0, cnt) {
		cout << "Hipp hipp hurra, " << str << "!\n";
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str;
    int cnt;
    
    cin >> str >> cnt;
    
	solve(str, cnt);
}