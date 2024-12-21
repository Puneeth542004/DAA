#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;

    while (num > 0) {
        digits++;
        num /= 10;
    }

    num = original;
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return sum == original;
}

int main() {
    int input1 = 153, input2 = 419;

    cout << "Input: " << input1 << "\nOutput: " << (isArmstrong(input1) ? "True" : "False") << endl;
    cout << "Input: " << input2 << "\nOutput: " << (isArmstrong(input2) ? "True" : "False") << endl;

    return 0;
}

