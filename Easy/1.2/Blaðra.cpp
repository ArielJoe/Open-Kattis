#include <iostream>
#include <iomanip>
using namespace std;

void solve() {
    int v, a, t;
    cin >> v >> a >> t;

    cout << setprecision(9) << (v * t) + 0.5 * a * (t * t);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
}