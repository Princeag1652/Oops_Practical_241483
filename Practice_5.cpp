#include <iostream>
using namespace std;

class Demo {
private:
    int num1, num2;

public:
    // Default Constructor
    Demo() {
        num1 = 0;
        num2 = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Demo(int a, int b) {
        num1 = a;
        num2 = b;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    Demo(Demo &obj) {
        num1 = obj.num1;
        num2 = obj.num2;
        cout << "Copy Constructor Called" << endl;
    }

    // Overloaded Constructor
    Demo(int a) {
        num1 = a;
        num2 = 0;
        cout << "Overloaded Constructor Called" << endl;
    }

    // Display function
    void display() {
        cout << "Num1 = " << num1 << ", Num2 = " << num2 << endl;
    }
};

int main() {
    // Default constructor
    Demo d1;
    d1.display();

    // Parameterized constructor
    Demo d2(10, 20);
    d2.display();

    // Copy constructor
    Demo d3(d2);
    d3.display();

    // Overloaded constructor
    Demo d4(50);
    d4.display();

    return 0;
}