#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    // Overloading + operator
    Number operator +(Number obj) {
        return Number(value + obj.value);
    }

    // Overloading - operator
    Number operator -(Number obj) {
        return Number(value - obj.value);
    }

    // Overloading ++ operator
    Number operator ++() {
        ++value;
        return Number(value);
    }

    // Overloading == operator
    bool operator ==(Number obj) {
        return value == obj.value;
    }

    // Overloading << operator
    friend ostream& operator <<(ostream &out, Number obj);

};

ostream& operator <<(ostream &out, Number obj) {
    out << obj.value;
    return out;
}

int main() {

    Number n1(20), n2(10), result;

    result = n1 + n2;
    cout << "Addition = " << result << endl;

    result = n1 - n2;
    cout << "Subtraction = " << result << endl;

    ++n1;
    cout << "After Increment = " << n1 << endl;

    if (n1 == n2)
        cout << "Both numbers are Equal" << endl;
    else
        cout << "Both numbers are Not Equal" << endl;

    return 0;
}