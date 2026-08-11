#include <iostream>
using namespace std;

int main() {
    // check if an integer is a valid palindrome

    cout  << " ===== Valid Palindrome Checker ===== " << endl;

    cout << "This program checks if an integer is a valid palindrome." << endl;

    int n;
    cout << "Enter an integer: ";
    cin >> n;
    // Implementation for checking palindrome would go here

    int original = n;
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    if (original == reversed) {
        cout << original << " is a valid palindrome." << endl;
    } else {
        cout << original << " is not a valid palindrome." << endl;
    }

    cout << "Thank you for using the Valid Palindrome Checker!" << endl;

    return 0;
}
