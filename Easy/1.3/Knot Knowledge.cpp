#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

int solve(int cnt, int kn[]) {
	int le[cnt];
	FOR (i, 0, cnt - 1) {
		int l;
		cin >> l;
		le[i] = l;
	}
	FOR (i, 0, cnt) {
		int jml = 0;
		FOR (j, 0, cnt - 1) {
			if (kn[i] == le[j]) jml++;
		}
		if (jml == 0) return kn[i];
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cnt;
    cin >> cnt;
    
    int kn[cnt];
    FOR (i, 0, cnt) {
        int k;
        cin >> k;
        kn[i] = k;
	}
	
	cout << solve(cnt, kn);
}