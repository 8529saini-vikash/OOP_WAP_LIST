#include <iostream>
using namespace std;

class Arithmetic {
public:
    inline int add(int a, int b) {
        return a + b;
    }

    inline int subtract(int a, int b) {
        return a - b;
    }

    inline int multiply(int a, int b) {
        return a * b;
    }

    inline float divide(int a, int b) {
        return (float)a / b;
    }
};

int main() {
    Arithmetic obj;
    int x = 20, y = 10;

    cout << "Addition = " << obj.add(x, y) << endl;
    cout << "Subtraction = " << obj.subtract(x, y) << endl;
    cout << "Multiplication = " << obj.multiply(x, y) << endl;
    cout << "Division = " << obj.divide(x, y) << endl;

    return 0;
}