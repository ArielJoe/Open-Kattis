#include <iostream>
using namespace std;

void solve(int a) {
	if (a % 2 == 1) {
		cout << "Alice";
	}
	else {
		cout << "Bob";
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    cin >> a;
    
	solve(a);
}