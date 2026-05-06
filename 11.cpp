#include <iostream>
using namespace std;

// Engine Class
class Engine {
private:
    string engineType;

public:
    Engine(string type) {
        engineType = type;
    }

    void displayEngine() {
        cout << "Engine Type: " << engineType << endl;
    }
};

// Car Class contains Engine object
class Car {
private:
    string carName;
    Engine engine;

public:
    Car(string name, string type)
        : engine(type) {

        carName = name;
    }

    void displayCar() {
        cout << "Car Name: " << carName << endl;
        engine.displayEngine();
    }
};

int main() {

    Car c1("Toyota Fortuner", "Diesel Engine");

    c1.displayCar();

    return 0;
}