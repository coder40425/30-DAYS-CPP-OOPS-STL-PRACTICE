/* Day 5: Bank Account Class with Static Members (Static members, Encapsulation)
Create a BankAccount class with a static variable totalAccounts. Increment it for each new
account. Show number of accounts created.

*Output Example:*
Accounts Created: 3   */

#include<iostream>
using namespace std;

class BankAccount {
private:
    int accountId;
    static int totalAccounts;

public:
    void setData() {
        cout << "Enter Account ID: ";
        cin >> accountId;
        totalAccounts++;
    }

    void getData() const {
        cout << "Account created with ID: " << accountId << endl;
    }

    static void showTotalAccounts() {
        cout << "Accounts Created: " << totalAccounts << endl;
    }
};

// Define and initialize static variable
int BankAccount::totalAccounts;   // by default it is already zero

int main() {
    BankAccount A1, A2, A3;

    A1.setData();
    A1.getData();

    A2.setData();
    A2.getData();

    A3.setData();
    A3.getData();

    // Show total accounts
    BankAccount::showTotalAccounts();

    return 0;
}


/*  OUTPUT:
Enter Account ID: 101
Account created with ID: 101
Enter Account ID: 102
Account created with ID: 102
Enter Account ID: 103
Account created with ID: 103
Accounts Created: 3           */
     
