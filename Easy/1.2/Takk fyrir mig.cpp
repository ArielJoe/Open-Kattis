#include <iostream>
#include <string>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(int a) {
    string arr[a];
    
    FOR (i, 0, a) {
        cin >> arr[i];
	}
	
	FOR (i, 0, a) {
        cout << "Takk " << arr[i] << endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;
	solve(a);
}