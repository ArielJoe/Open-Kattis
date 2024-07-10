#include <iostream>
#include <vector>
using namespace std;

void solve(vector<string> arr, int cnt) {
	int n = 0, k = 0;
	for (int i = 0; i < cnt; i++) {
		if (arr[i] == "nautakjot") n = 1;
		if (arr[i] == "kjuklingur") k = 1;
	}
	if (n && k) cout << "blandad best";
	else if (k) cout << "kjuklingur";
	else cout << "nautakjot";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cnt;
    cin >> cnt;

    vector<string> a;
    string b;
    for (int i = 0; i < cnt; i++) {
        cin >> b;
        a.push_back(b);
	}
	solve(a, cnt);
}