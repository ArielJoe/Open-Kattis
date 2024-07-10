#include <iostream>
#include <string>
using namespace std;

void solve(string a) {
	for (int i = a.size() - 1; i >= 0; i--) {
		cout << a[i];
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    cin >> a;
	solve(a);
}