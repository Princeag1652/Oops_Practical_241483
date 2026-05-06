#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function for runtime polymorphism
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    // Function overriding
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    // Function overriding
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* ptr;   // Base class pointer

    Dog d;
    Cat c;

    // Runtime polymorphism
    ptr = &d;
    ptr->sound();

    ptr = &c;
    ptr->sound();

    return 0;
}