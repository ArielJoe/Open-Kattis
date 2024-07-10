#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

string solve(int a, int b, vector<int> nums) {
	int idx;
	FOR (i, 0, a) {
		if (nums[i] == b) {
			if (i == 0) return "fyrst";
			else if (i == 1) return "naestfyrst";
			else idx = i + 1;
		}
	}
	stringstream ss;
	ss << idx;
	return ss.str() + " fyrst";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> nums;
    int a, b;
    cin >> a >> b;
    
    FOR (i, 0, a) {
    	int num;
    	cin >> num;
    	nums.push_back(num);
	}
    
	cout << solve(a, b, nums);
}