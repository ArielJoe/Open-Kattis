#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> arr) {
	if (arr[0] < arr[1] && arr[0] < arr[2]) {
		cout << "Monnei";
	}
	else if (arr[1] < arr[0] && arr[1] < arr[2]) {
		cout << "Fjee";
	}
	else cout << "Dolladollabilljoll";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> a;
    int b;
    for (int i = 0; i < 3; i++) {
        cin >> b;
        a.push_back(b);
	}
	solve(a);
}