#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {

    Dog obj;

    obj.sound();

    return 0;
}