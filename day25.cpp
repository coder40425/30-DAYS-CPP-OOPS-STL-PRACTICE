/* Day 25: Abstract Base Class: Animal Sounds (Abstract Class, Virtual Functions)

Base class Animal with pure virtual sound(). Derived classes implement it.

*Output Example:*
Dog: Bark               */


#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual void sound() = 0; // Pure virtual function
};

// Derived class: Dog
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog: Bark" << endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat: Meow" << endl;
    }
};

// Derived class: Cow
class Cow : public Animal {
public:
    void sound() override {
        cout << "Cow: Moo" << endl;
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();
    Animal* a3 = new Cow();

    a1->sound(); // Dog: Bark
    a2->sound(); // Cat: Meow
    a3->sound(); // Cow: Moo

    // Clean up
    delete a1;
    delete a2;
    delete a3;

    return 0;
}
