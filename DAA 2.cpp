#include <iostream>
#include <string>
#include <algorithm> // Required for std::reverse
#include <cctype>    // For isdigit()

using namespace std;

// Function to reverse a number
string reverseNumber(const string& input) {
    // Check for illegal input using a traditional for loop
    for (size_t i = 0; i < input.length(); ++i) {
        if (!isdigit(input[i]) && input[i] != '-') {
            return "Illegal input";
        }
    }

    // Reverse the number (preserving the negative sign if present)
    string reversed = input;
    if (input[0] == '-') {
        reverse(reversed.begin() + 1, reversed.end());
    } else {
        reverse(reversed.begin(), reversed.end());
    }
    return reversed;
}

int main() {
    string input;
    while (true) {
        cout << "Enter a number (or 'exit' to quit): ";
        cin >> input;

        if (input == "exit") {
            break;
        }

        string result = reverseNumber(input);
        cout << "- " << result << endl;
    }

    cout << "\nTime Complexity: O(n), where n is the number of digits in the input number.\n";
    return 0;
}

