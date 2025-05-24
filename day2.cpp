/*Day 2: Student Class with Average Calculator (OOPs - Constructor, Member Functions)
Create a class Student with marks in 3 subjects as private data. Use a constructor to initialize them.
Write a member function to calculate and print the average marks.
*Output Example:*
Average Marks: 85.33  */

#include<iostream>
#include<iomanip>     // for set precision
using namespace std;
class Student{
    private:
    float a,b,c;
    public:
       Student();
       void average(){
        float avg=(a+b+c)/3.0;
        cout<<fixed<<setprecision(2);    //to keep the answer to two decimal places
        cout<<"Average marks of the student is: "<<avg<<endl;
       }
};
Student :: Student(){
    a=77;
    b=89;
    c=81;
}

int main(){
    Student s;
    s.average();

    return 0;
}
