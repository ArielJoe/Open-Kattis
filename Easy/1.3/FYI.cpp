#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(string n) {
	if (n[0] == '5' && n[1] == '5' && n[2] == '5') cout << 1;
	else cout << 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string n;
    cin >> n;
    
	solve(n);
}