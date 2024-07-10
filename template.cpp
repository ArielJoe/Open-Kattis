#include <iostream>
#include <vector>
using namespace std;
typedef long long LL;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

int main() {
    vector<string> a;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;

    cout << a;

    return 0;
}