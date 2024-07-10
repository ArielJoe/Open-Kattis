#include <iostream>
#include <string>
using namespace std;

int solve(const string& str) {
    return str.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    cin >> a;
    cout << solve(a) << endl;
}