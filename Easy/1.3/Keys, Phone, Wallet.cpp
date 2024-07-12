#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(int cnt, string item[]) {
	int k = 0, p = 0, w = 0;
	FOR (i, 0, cnt) {
		if (item[i] == "keys") k = 1;
		if (item[i] == "phone") p = 1;
		if (item[i] == "wallet") w = 1;
	}
	if (k && p && w) cout << "ready";
	else {
		if (!k) cout << "keys\n";
		if (!p) cout << "phone\n";
		if (!w) cout << "wallet";
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cnt;
    cin >> cnt;
    
    string item[cnt];
    FOR (i, 0, cnt) {
        string itm;
        cin >> itm;
        item[i] = itm;
	}
    
	solve(cnt, item);
}