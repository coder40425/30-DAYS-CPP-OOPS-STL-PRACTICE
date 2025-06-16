/* Day 15: Protected Data in Inheritance (Protected Access + Inheritance)

Base class has protected: int id. Derived class sets and prints it.

*Output Example:*
ID: 101                   */


#include<iostream>
using namespace std;

class Personal{
    protected: 
     int id;       //protected data member

     Person(){   //optional constructor (not needed here since we set id in derived)

     }
};
class Data: public Personal{
    public:
     void setinfo(int x){
        id=x;              //accessing protected data member
     }
     void getinfo(){
        cout<<"ID: "<<id<<endl;
     }
};
int main(){
    Data d1;
    d1.setinfo(101);  //set protected data using derived class
    d1.getinfo();     //get the output
    return 0;
}
