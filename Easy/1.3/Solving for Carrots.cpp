#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(int cnt, string cons[], int carr) {
	cout << carr;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cnt, carr;
    cin >> cnt >> carr;
    cin.ignore();
    
    string cons[cnt];
    FOR (i, 0, cnt) {
        string con;
        getline(cin, con);
        cons[i] = con;
	}
    
	solve(cnt, cons, carr);
}