#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

    static int studentCount;

public:
    void setData(int r, string n) {
        rollNo = r;
        name = n;
        studentCount++;
    }

    void displayData() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    static void displayCount() {
        cout << "Total Students = " << studentCount << endl;
    }
};

// Static data member initialization
int Student::studentCount = 0;

int main() {
    Student s1, s2;

    s1.setData(101, "Rahul");
    s2.setData(102, "Aman");

    s1.displayData();
    cout << endl;

    s2.displayData();
    cout << endl;

    Student::displayCount();

    return 0;
}