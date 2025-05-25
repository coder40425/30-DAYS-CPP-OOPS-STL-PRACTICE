/* Day 1:
Create a Class and Print Attributes (OOPs - Class, Access Specifiers)
Create a class Person with two public attributes: name (string) and age (int). Create an object
and print the attributes.
*Output Example:*
Name: Alice
Age: 25     */

#include<iostream>
using namespace std;

class Person{
    public :
      string name;
      int age;

      void setdata(){
        cout<<"enter the name: "<<endl;
        cin>>name;
        cout<<"enter the age: "<<endl;
        cin>>age;
      }

     void getdata(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
     }
};

int main(){
     Person p;
     p.setdata();
     p.getdata();
     return 0;
}
