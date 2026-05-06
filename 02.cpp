#include <iostream>
using namespace std;

class Interest {
public:
    float simpleInterest(float principal, int time, float rate = 5.0) {
        return (principal * rate * time) / 100;
    }
};

int main() {
    Interest obj;

    float principal;
    int time;

    cout << "Enter Principal Amount: ";
    cin >> principal;

    cout << "Enter Time (in years): ";
    cin >> time;

    cout << "Simple Interest = "
         << obj.simpleInterest(principal, time);

    return 0;
}