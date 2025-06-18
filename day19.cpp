/* Day 19: Custom String Class with Operator Overloading (OOPs - Operator Overload)

Overload + to concatenate strings using a custom class.

*Output Example:*
HelloWorld               */

#include <iostream>
#include <string>
using namespace std;

class CustomString {
    string str; 

public:
    CustomString(const string& s = "") : str(s) {}

    // Overload + operator to concatenate two CustomStrings
    CustomString operator+(const CustomString& rhs) const {
        return CustomString(str + rhs.str);
    }

    void print() const {
        cout << str <<endl;
    }
};

int main() {
    CustomString s1("Hello");
    CustomString s2("World");

    CustomString s3 = s1 + s2;

    s3.print();  // Output: HelloWorld

    return 0;
}
