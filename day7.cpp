/* Day 7: 
Build a Mini Contact Manager (OOPs - Class + vector<string>)
Create a Contact class and use a vector to store multiple contacts. Add a function to display all.
*Output Example:*
John
Alice
Bob                                        */

#include<iostream>
#include<vector>
using namespace std;

class ContactManager{
    private:
      vector<string>contacts;
    public:
      void addContact(const string& name){
        contacts.push_back(name);
      } 
      void display(){
        cout<<"Contact List: "<<endl;
        for(const string& name: contacts){
            cout<<name<<endl;
        }
      }
};

int main(){
    ContactManager manager;
    manager.addContact("John");
    manager.addContact("Alice");
    manager.addContact("Bob");

    manager.display();
    return 0;
}

/*
OUTPUT:-
Contact List: 
John
Alice
Bob                          */
