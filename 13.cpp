#include <iostream>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    float balance;

public:

    void createAccount() {

        cout << "Enter Depositor Name: ";
        cin.ignore();
        getline(cin, depositorName);

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {

        float amount;

        cout << "Enter Amount to Deposit: ";
        cin >> amount;

        balance += amount;

        cout << "Amount Deposited Successfully" << endl;
    }

    void withdraw() {

        float amount;

        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        if(amount <= balance) {

            balance -= amount;

            cout << "Withdrawal Successful" << endl;
        }
        else {
            cout << "Insufficient Balance" << endl;
        }
    }

    void display() {

        cout << endl;
        cout << "Account Holder Name: "
             << depositorName << endl;

        cout << "Account Number: "
             << accountNumber << endl;

        cout << "Current Balance: "
             << balance << endl;
    }
};

int main() {

    BankAccount obj;

    int choice;

    obj.createAccount();

    do {

        cout << endl;
        cout << "===== BANK MENU =====" << endl;

        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Display Account Details" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                obj.deposit();
                break;

            case 2:
                obj.withdraw();
                break;

            case 3:
                obj.display();
                break;

            case 4:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice" << endl;
        }

    } while(choice != 4);

    return 0;
}