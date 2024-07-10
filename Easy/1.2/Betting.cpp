#include <iostream>
#include <vector>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(int p) {
	cout << 100.0 / p << endl;
    cout << 100.0 / (100 - p);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int p;
    cin >> p;
    
	solve(p);
}