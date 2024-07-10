#include <iostream>
#include <string>
using namespace std;

string solve(const string& str) {
    string pattern = "COV";
    size_t pos = 0;

    // Iterate through the input string
    for (char ch : str) {
        // Check if the current character matches the next character in the pattern
        if (ch == pattern[pos]) {
            pos++;  // Move to the next character in the pattern
            // If we have matched the entire pattern
            if (pos == pattern.size()) {
                return "Veikur!";
            }
        } else {
            // Reset the position if the sequence breaks
            if (ch == 'C') {
                pos = 1;  // If we encounter 'C', start matching from the second character
            } else {
                pos = 0;  // Otherwise, reset the position
            }
        }
    }
    return "Ekki veikur!";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string dna;
    cin >> dna;
    cout << solve(dna) << endl;
}
