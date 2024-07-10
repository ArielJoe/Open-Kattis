#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(int len) {
	printf("%.5f", len * 0.09144);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int len;
    cin >> len;
    
	solve(len);
}