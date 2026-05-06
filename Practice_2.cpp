#include <iostream>
using namespace std;

// Function with default arguments
float simpleInterest(float principal, float rate = 5, float time = 1) {
    return (principal * rate * time) / 100;
}

int main() {
    float p, r, t;

    cout << "Enter Principal Amount: ";
    cin >> p;

    cout << "Simple Interest (default rate=5% and time=1 year): "
         << simpleInterest(p) << endl;

    cout << "Enter Rate and Time: ";
    cin >> r >> t;

    cout << "Simple Interest (user-defined values): "
         << simpleInterest(p, r, t) << endl;

    return 0;
}