#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(string a) {
	cout << a[1] << a[0];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string a;
    cin >> a;
	
	solve(a);
}