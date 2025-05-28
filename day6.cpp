/* Day 6: Library System - Issue & Return Book (OOPs - Object Management)
Create a Library class where you can issue and return books. Track how many books are issued.
*Output Example:*
Books issued: 2
Books available: 3      */

#include<iostream>
using namespace std;

class Library{
    private:
       int Id;
       static int available;
       static int issued;

    public:
        static void totalbooks(){
            cout<<"Total books available in the library: "<<endl;
            cin>>available;
        }
        void setdata(){
            cout<<"Enter the Id of book to be issued:  "<<endl;
            cin>>Id; 
            issued++;
        }
        void getdata(){
            cout<<"Book issued with Id: "<<Id<<endl;
        }
        static void issue(){
            cout<<"Total books issued: "<<issued<<endl;
        }
        static void availablebooks(){
            cout<<"Total books avilable: "<<available-issued<<endl;
        }
        
};
   int Library:: issued;  //deafult value zero
   int Library:: available;

   int main(){
    
    Library::totalbooks();
    Library A1,A2,A3;
    A1.setdata();
    A1.getdata();

    A2.setdata();
    A2.getdata();

    A3.setdata();
    A3.getdata();

    Library::issue();
    Library::availablebooks();

    return 0;
   }

/*
OUTPUT:
Total books available in the library: 
100
Enter the Id of book to be issued:  
245
Book issued with Id: 245
Enter the Id of book to be issued:
567
Book issued with Id: 567
Enter the Id of book to be issued:
891
Book issued with Id: 891
Total books issued: 3
Total books avilable: 97
                           */
