#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(string a) {
	if (a == "OCT 31" || a == "DEC 25") cout << "yup";
	else cout << "nope";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string a;
    getline(cin, a);
    
	solve(a);
}