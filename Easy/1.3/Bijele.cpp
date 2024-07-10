#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(int ki, int qu, int ro, int bi, int kn, int pa) {
	printf("%d %d %d %d %d %d", 1-ki, 1-qu, 2-ro, 2-bi, 2-kn, 8-pa);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int ki, qu, ro, bi, kn, pa;
    cin >> ki >> qu >> ro >> bi >> kn >> pa;
    
	solve(ki, qu, ro, bi, kn, pa);
}