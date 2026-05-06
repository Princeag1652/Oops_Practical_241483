#include <iostream>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    float balance;

public:
    // Create account
    void createAccount() {
        cout << "Enter Depositor Name: ";
        cin >> depositorName;
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Deposit money
    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully!" << endl;
    }

    // Withdraw money
    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful!" << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Display account details
    void display() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: ₹" << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    account.createAccount();

    do {
        cout << "\n===== Bank Management System =====" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display Account Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                account.deposit();
                break;

            case 2:
                account.withdraw();
                break;

            case 3:
                account.display();
                break;

            case 4:
                cout << "Thank you for using Bank Management System!" << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while(choice != 4);

    return 0;
}