/* Day 12: Vehicle Inheritance Hierarchy (Single Inheritance, Base/Derived classes)

Base class: Vehicle. Derived class: Car. Print features from both.

*Output Example:*
Vehicle: 4 wheels
Car: AC included          */

// SINGLE INHERITANCE
#include<iostream>
using namespace std;

class Vehicle {
public:
    void showFeatures() {
        cout << "Vehicle: 4 wheels" << endl;
    }
};

class Car : public Vehicle {
public:
    void showCarFeatures() {
        cout << "Car: AC included" << endl;
    }
};

int main() {
    Car c1;
    c1.showFeatures();       // From base class
    c1.showCarFeatures();    // From derived class
    return 0;
}



// MULTI LEVEL INHERITANCE
#include<iostream>
#include<string>
using namespace std;

class Vehicle{           //BASE CLASS
    public:
       string CarName;
       int price;

       Vehicle(){

       }
};
class Engine: public Vehicle{            //INTERMEDIATE DERIVED CLASS
    public:
        string details;
        Engine(){

        }
};
class Speciality: public Engine{                             //MOST DERIVED CLASS
    public:
       string special;
       void getinfo(){
        cout<<"Name of the car is: "<<CarName<<endl;
        cout<<"Price is $"<<price<<endl;
        cout<<"Engine details: "<<details<<endl;
        cout<<"Specialities: "<<special<<endl;
       }
};
int main(){
    Speciality s1;
    s1.CarName="BMW";
    s1.price=10000;
    s1.details="Electric & Hybrid engines";
    s1.special="Internal combustion & Four stroke cycle";
    s1.getinfo();
    return 0;

}
