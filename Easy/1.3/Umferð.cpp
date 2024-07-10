#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(int r, int c, string arr[]) {
	float total = 0;
	FOR (i, 0, r) {
		for (int j = 0; j < arr[i].size(); j++) {
			if (arr[i][j] == '.') total += 1;
		}
	}
	printf("%.5f", total / (r * c));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c, r;
    cin >> c >> r;
    
	string arr[r];
	FOR (i, 0, r) {
		string park;
		cin >> park;
		arr[i] = park;
	}
    
	solve(r, c, arr);
}