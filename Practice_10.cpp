#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;
};

// Derived class for Rectangle
class Rectangle : public Shape {
private:
    float length, breadth;

public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

// Derived class for Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Shape* ptr;

    Rectangle rect(10, 5);
    Circle circ(7);

    ptr = &rect;
    ptr->area();

    ptr = &circ;
    ptr->area();

    return 0;
}