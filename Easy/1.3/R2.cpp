#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(int r1, int s) {
	cout << s * 2 - r1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int r1, s;
    cin >> r1 >> s;
    
	solve(r1, s);
}