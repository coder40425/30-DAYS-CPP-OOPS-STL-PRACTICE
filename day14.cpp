/* Day 14: Bank Account - Savings & Current (Function Overriding)
Base: Account with displayBalance(). Override it in Savings and Current.

*Output Example:*
Savings Balance: 1000
Current Balance: 2000                                     */


#include<iostream>
using namespace std;

class Account{                               //BASE CLASS: ACCOUNT
    public:
     virtual void displayBalance(){          //VIRTUAL FUNCTION CAN BE OVERRIDDEN BY DERIVED CLASSES
        cout<<"Account Balance: 0"<<endl;
     }
};
class Savings: public Account{               //DERIVED CLASS: SAVINGS INHERITS FROM ACCOUNT
    public:
     void displayBalance() override{         //OVERRIDDING displayBalance() FUNCTION
        cout<<"Savings Balance: 1000"<<endl;
     }
};
class Current: public Account{             //DERIVED CLASS: CURRENT INHERITS FROM ACCOUNT
    public:
     void displayBalance() override{       //OVERRIDDING displayBalance() FUNCTION
        cout<<"Current Balance: 2000"<<endl;
     }
};

int main(){
    Savings s;          //CREATNG OBJECTS OF DERIVED CLASSES
    Current c;

    s.displayBalance();  //CALLING OVERRIDDEN FUNCTIONS USING OBJECT OF DERIVED CLASS
    c.displayBalance();
    
    return 0;
}
