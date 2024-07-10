#include <iostream>
using namespace std;

void solve(string str) {
	string res;
	res += str[0];
	for (int i = 1; i < str.size(); i++) {
		if (str[i] == '-') res += str[i + 1];
	}
	cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string a;
    cin >> a;
    
	solve(a);
}