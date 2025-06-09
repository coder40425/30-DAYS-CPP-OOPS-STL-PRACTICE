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
    Shape*shape1=new Circle(5);        //CREATES POINTERS OF BASE CLASS TYPE (SHAPE*), BUT ASSIGNS THEM TO DERIVED OBJECTS (CIRCLE & SQUARE)
    Shape*shape2=new Square(5);
    shape1->area();                 //CALLS THE CORRECT AREA() METHOD DEPENDING ON THE OBJECT TYPE
    shape2->area();

    delete shape1;       //DELETES DYNAMICALLY ALLOCATED OBJECTS TO PREVENT MEMORY LEAK
    delete shape2;

    return 0;
}
