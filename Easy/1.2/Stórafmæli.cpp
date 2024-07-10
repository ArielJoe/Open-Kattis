#include <iostream>
using namespace std;

string solve() {
	int a;
	cin >> a;
	
	if (a % 10 == 0) return "Jebb";
	return "Neibb";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout << solve();
}