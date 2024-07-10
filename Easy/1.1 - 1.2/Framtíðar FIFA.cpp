#include <iostream>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    cout << 2022 + (a / b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
}