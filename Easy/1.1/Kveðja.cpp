#include <iostream>
#include <string>
using namespace std;

string solve(const string& str) {
    return "Kvedja,\n" + str;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    cin >> a;
    cout << solve(a) << endl;
}