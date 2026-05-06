#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:

    // Pure Virtual Function
    virtual void area() = 0;
};

// Derived Class: Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle = "
             << 3.14 * radius * radius << endl;
    }
};

// Derived Class: Rectangle
class Rectangle : public Shape {
private:
    int length, breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Area of Rectangle = "
             << length * breadth << endl;
    }
};

int main() {

    Shape *ptr;

    Circle c(3);
    Rectangle r(4, 5);

    // Runtime Polymorphism
    ptr = &c;
    ptr->area();

    ptr = &r;
    ptr->area();

    return 0;
}