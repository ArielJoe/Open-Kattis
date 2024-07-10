#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(int cnt, string arr[]) {
	FOR (i, 0, cnt) {
		if (i % 2 == 0) cout << arr[i] << endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cnt;
    cin >> cnt;
    
    string arr[cnt];
    FOR (i, 0, cnt) {
        string w;
        cin >> w;
        arr[i] = w;
	}
	solve(cnt, arr);
}