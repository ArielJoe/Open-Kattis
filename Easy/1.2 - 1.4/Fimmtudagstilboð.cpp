#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(int y) {
	if (y < 2021) cout << 1000;
	else cout << 1000 + (y - 2020) * 100;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int y;
    cin >> y;
    
	solve(y);
}