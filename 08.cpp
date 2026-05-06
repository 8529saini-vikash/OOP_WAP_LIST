#include <iostream>
using namespace std;

class Student {
protected:
    int rollNo;

public:
    void getRollNo() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }
};

class Result : public Student {
private:
    int marks;

public:
    void getMarks() {
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll Number = " << rollNo << endl;
        cout << "Marks = " << marks << endl;
    }
};

int main() {

    Result obj;

    obj.getRollNo();
    obj.getMarks();
    obj.display();

    return 0;
}