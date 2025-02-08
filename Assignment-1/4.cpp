#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int left = 0, right = str.length() - 1;

    while (left < right) {
        // Skip spaces on the left and right
        if (str[left] == ' ') {
            left++;
            continue;
        }
        if (str[right] == ' ') {
            right--;
            continue;
        }

        // Compare characters while ignoring case sensitivity
        if (str[left] != str[right] && (str[left] + 32 != str[right] && str[left] - 32 != str[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput);
    
    if (isPalindrome(userInput)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    
    return 0;
}
