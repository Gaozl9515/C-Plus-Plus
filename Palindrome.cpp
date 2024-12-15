#include <iostream>
#include <string>
#include <algorithm> // For std::reverse

// Function to check if a number is a palindrome
bool isPalindromeNumber(int num) {
    int original = num, reversed = 0;

    // Reverse the digits of the number
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed; // Check if the original number is equal to the reversed number
}

// Function to check if a string is a palindrome
bool isPalindromeString(const std::string& str) {
    std::string reversed_str = str;
    std::reverse(reversed_str.begin(), reversed_str.end()); // Reverse the string
    return str == reversed_str; // Check if the original string is equal to the reversed string
}

int main() {
    // Check palindrome for a number
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPalindromeNumber(num)) {
        std::cout << num << " is a palindrome number." << std::endl;
    } else {
        std::cout << num << " is not a palindrome number." << std::endl;
    }

    // Check palindrome for a string
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    if (isPalindromeString(str)) {
        std::cout << str << " is a palindrome string." << std::endl;
    } else {
        std::cout << str << " is not a palindrome string." << std::endl;
    }

    return 0;
}
