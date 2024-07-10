#include <iostream>
#include <vector>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(int a) {
	if (a % 2 == 1) cout << "first";
	else cout << "second";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    cin >> a;
    
	solve(a);
}