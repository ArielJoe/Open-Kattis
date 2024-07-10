#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(int cnt, int arr[]) {
	FOR (i, 0, cnt) {
		printf("%d is %s\n", arr[i], (((arr[i] < 0)? arr[i] * -1 : arr[i]) % 2 == 1)? "odd" : "even");
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cnt;
    cin >> cnt;
    
    int arr[cnt];
    FOR (i, 0, cnt) {
        int v;
        cin >> v;
        arr[i] = v;
	}
    
	solve(cnt, arr);
}