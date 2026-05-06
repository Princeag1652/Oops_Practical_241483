#include <iostream>
using namespace std;

// Function overloading for Sum
int calculate(int a, int b) {
    return a + b;
}

// Function overloading for Area of Rectangle
float calculate(float length, float breadth) {
    return length * breadth;
}

// Function overloading for Volume of Cube
double calculate(double side) {
    return side * side * side;
}

int main() {
    int x, y;
    float l, b;
    double s;

    // Sum
    cout << "Enter two integers for sum: ";
    cin >> x >> y;
    cout << "Sum = " << calculate(x, y) << endl;

    // Area
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of Rectangle = " << calculate(l, b) << endl;

    // Volume
    cout << "Enter side of cube: ";
    cin >> s;
    cout << "Volume of Cube = " << calculate(s) << endl;

    return 0;
}