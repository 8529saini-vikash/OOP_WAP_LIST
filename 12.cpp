#include <iostream>
using namespace std;

class CurrencyConverter {
private:
    float amount;

public:
    void getAmount() {
        cout << "Enter Amount in INR: ";
        cin >> amount;
    }

    void convertToUSD() {
        cout << "Amount in USD = "
             << amount / 83 << endl;
    }

    void convertToEuro() {
        cout << "Amount in Euro = "
             << amount / 90 << endl;
    }

    void convertToYen() {
        cout << "Amount in Yen = "
             << amount * 1.75 << endl;
    }
};

int main() {

    CurrencyConverter obj;

    int choice;

    obj.getAmount();

    cout << endl;
    cout << "1. Convert to USD" << endl;
    cout << "2. Convert to Euro" << endl;
    cout << "3. Convert to Yen" << endl;

    cout << "Enter Your Choice: ";
    cin >> choice;

    cout << endl;

    switch(choice) {

        case 1:
            obj.convertToUSD();
            break;

        case 2:
            obj.convertToEuro();
            break;

        case 3:
            obj.convertToYen();
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}