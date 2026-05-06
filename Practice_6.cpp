#include <iostream>
using namespace std;

class Interest {
private:
    float principal, rate, time, simpleInterest;

public:
    // Constructor for dynamic initialization
    Interest(float p, float r, float t) {
        principal = p;
        rate = r;
        time = t;
        simpleInterest = (principal * rate * time) / 100;
    }

    // Display function
    void display() {
        cout << "Principal Amount: " << principal << endl;
        cout << "Rate of Interest: " << rate << "%" << endl;
        cout << "Time Period: " << time << " years" << endl;
        cout << "Simple Interest: " << simpleInterest << endl;
    }
};

int main() {
    float p, r, t;

    cout << "Enter Principal, Rate, and Time: ";
    cin >> p >> r >> t;

    // Dynamic initialization
    Interest obj(p, r, t);

    obj.display();

    return 0;
}