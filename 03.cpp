#include <iostream>
using namespace std;

class Overload {
public:

    // Sum of two integers
    int calculate(int a, int b) {
        return a + b;
    }

    // Area of rectangle
    int calculate(int length, int breadth, int type) {
        return length * breadth;
    }

    // Volume of cube
    float calculate(float side) {
        return side * side * side;
    }
};

int main() {
    Overload obj;

    cout << "Sum = " << obj.calculate(10, 20) << endl;

    cout << "Area of Rectangle = "
         << obj.calculate(5, 4, 1) << endl;

    cout << "Volume of Cube = "
         << obj.calculate(3.0f) << endl;

    return 0;
}