#include <iostream>
using namespace std;

class Demo {
private:
    int num;

public:

    // Default Constructor
    Demo() {
        num = 0;
        cout << "Default Constructor Called" << endl;
        cout << "Value = " << num << endl;
    }

    // Parameterized Constructor
    Demo(int x) {
        num = x;
        cout << "Parameterized Constructor Called" << endl;
        cout << "Value = " << num << endl;
    }

    // Copy Constructor
    Demo(Demo &obj) {
        num = obj.num;
        cout << "Copy Constructor Called" << endl;
        cout << "Copied Value = " << num << endl;
    }

    // Overloaded Constructor
    Demo(int a, int b) {
        num = a + b;
        cout << "Overloaded Constructor Called" << endl;
        cout << "Sum = " << num << endl;
    }
};

int main() {

    Demo d1;

    cout << endl;

    Demo d2(50);

    cout << endl;

    Demo d3(d2);

    cout << endl;

    Demo d4(10, 20);

    return 0;
}