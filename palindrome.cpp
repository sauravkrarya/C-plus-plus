#include <iostream>
#include <vector>

bool isPalindrome(int num) {
    std::vector<int> digits;

    // Store the digits of the number in a vector
    while (num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }

    // Check if the number is a palindrome
    for (int i = 0; i < digits.size() / 2; i++) {
        if (digits[i] != digits[digits.size() - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPalindrome(num)) {
        std::cout << "The number is a palindrome." << std::endl;
    } else {
        std::cout << "The number is not a palindrome." << std::endl;
    }

    return 0;
}