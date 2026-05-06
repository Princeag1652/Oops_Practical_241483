#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    // Overload + operator
    Number operator+(Number obj) {
        return Number(value + obj.value);
    }

    // Overload - operator
    Number operator-(Number obj) {
        return Number(value - obj.value);
    }

    // Overload ++ operator (prefix)
    Number operator++() {
        ++value;
        return *this;
    }

    // Overload == operator
    bool operator==(Number obj) {
        return (value == obj.value);
    }

    // Overload << operator
    friend ostream& operator<<(ostream &out, Number obj) {
        out << obj.value;
        return out;
    }
};

int main() {
    Number n1(10), n2(5), n3;

    // + operator
    n3 = n1 + n2;
    cout << "Addition: " << n3 << endl;

    // - operator
    n3 = n1 - n2;
    cout << "Subtraction: " << n3 << endl;

    // ++ operator
    ++n1;
    cout << "After Increment: " << n1 << endl;

    // == operator
    if (n1 == n2)
        cout << "Both numbers are equal" << endl;
    else
        cout << "Numbers are not equal" << endl;

    return 0;
}