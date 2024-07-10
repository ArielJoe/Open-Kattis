#include <iostream>
#include <vector>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void solve(vector<int> nums) {
	int res = 1;
	FOR (i, 0, 3) {
		res *= nums[i];
	}
	cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> nums;
    FOR (i, 0, 3) {
        int num;
        cin >> num;
        nums.push_back(num);
	}
    
	solve(nums);
}