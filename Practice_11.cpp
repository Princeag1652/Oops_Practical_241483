#include <iostream>
using namespace std;

// Engine class
class Engine {
private:
    int horsepower;

public:
    Engine(int hp) {
        horsepower = hp;
    }

    void showEngine() {
        cout << "Engine Horsepower: " << horsepower << " HP" << endl;
    }
};

// Car class contains Engine object
class Car {
private:
    string model;
    Engine engine;   // Containership (has-a relationship)

public:
    Car(string m, int hp) : engine(hp) {
        model = m;
    }

    void showCar() {
        cout << "Car Model: " << model << endl;
        engine.showEngine();
    }
};

int main() {
    Car car1("Toyota", 150);

    car1.showCar();

    return 0;
}