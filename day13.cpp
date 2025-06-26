/* Day 13: Shape Class with Area Calculation (Polymorphism)

Create base class Shape with virtual area() and derived classes Circle, Square.

*Output Example:*
Area of Circle: 78.5
Area of Square: 25                                                                                     */


#include<iostream>
#include<string>
using namespace std;

class Shape{                         //BASE CLASS
    public:
     virtual void area() = 0;        //PURE VIRTUAL FUNCTION //MAKES THE CLASS ABSTRACT //THIS LINE SETS UP RUNTIME POLYMORPHISM

};

class Circle: public Shape{         //DERIVED CLASS CIRCLE (INHERITS FROM SHAPE)
    float radius;
    public: 
       Circle(float r){            //CONSTRUCTOR FOR CIRCLE CLASS
        radius= r;
       }
       void area() override{                                     //OVERRIDDEN FUNCTION FROM BASE CLASS, USES FORMULA (pi*r*r)
        cout<<"area of circle: "<<3.14*radius*radius<<endl;      //IT ENSURES THIS METHOD REPLACES THE VIRTUAL METHOD FROM SHAPE
       }
};

 class Square: public Shape{       //DERIVED CLASS SQUARE(INHERITS FROM SHAPE)
    float side;
    public:
    Square(float s){         //CONSTRUCTOR FOR SQUARE CLASS
        side=s;
    }
    void area() override{
        cout<<"area of square: "<<side*side<<endl;     //OVERRIDDEN FUNCTION FROM BASE CLASS, USES FORMULA (side*side)
    }
 };

int main(){
    Circle c1(5); 
    Square s1(5);
    c1.area(); 
    s1.area();

    return 0;
}
