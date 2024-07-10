#include <iostream>
#include <vector>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(int a, int b) {
	if (a > b) cout << 1;
	else cout << 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    
	solve(a, b);
}