#include <iostream>
#include <string>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve() {
    string a;
    int b;
    cin >> a >> b;

    FOR (i, 0, b) {
        cout << a;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
}