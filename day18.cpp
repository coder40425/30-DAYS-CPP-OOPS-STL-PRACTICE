/* Day 18: Deque Operations - Palindrome Checker (STL - deque)

Use deque to check if a string is a palindrome.

*Output Example:*
Is Palindrome: Yes                 */


#include <iostream>
#include <deque>
using namespace std;

int main() {
    string str = "madam";
    deque<char> dq;

    // Push all characters into the deque
    for (char ch : str) {
        dq.push_back(ch);
    }

    bool isPalindrome = true;

    // Compare characters from front and back
    while (dq.size() > 1) {
        if (dq.front() != dq.back()) {
            isPalindrome = false;
            break;
        }
        dq.pop_front();  // Remove from front
        dq.pop_back();   // Remove from back
    }

    // Output result
    cout << "Is Palindrome: " << (isPalindrome ? "Yes" : "No") << endl;

    return 0;
}
