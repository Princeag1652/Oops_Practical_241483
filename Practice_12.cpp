#include <iostream>
using namespace std;

int main() {
    int choice;
    double amount, convertedAmount;

    // Fixed exchange rates (example rates)
    const double USD_TO_INR = 83.20;
    const double INR_TO_USD = 1 / USD_TO_INR;
    const double EUR_TO_INR = 90.50;
    const double INR_TO_EUR = 1 / EUR_TO_INR;

    do {
        cout << "\n===== Currency Converter Menu =====" << endl;
        cout << "1. USD to INR" << endl;
        cout << "2. INR to USD" << endl;
        cout << "3. EUR to INR" << endl;
        cout << "4. INR to EUR" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter amount in USD: ";
                cin >> amount;
                convertedAmount = amount * USD_TO_INR;
                cout << "Converted amount in INR: " << convertedAmount << endl;
                break;

            case 2:
                cout << "Enter amount in INR: ";
                cin >> amount;
                convertedAmount = amount * INR_TO_USD;
                cout << "Converted amount in USD: " << convertedAmount << endl;
                break;

            case 3:
                cout << "Enter amount in EUR: ";
                cin >> amount;
                convertedAmount = amount * EUR_TO_INR;
                cout << "Converted amount in INR: " << convertedAmount << endl;
                break;

            case 4:
                cout << "Enter amount in INR: ";
                cin >> amount;
                convertedAmount = amount * INR_TO_EUR;
                cout << "Converted amount in EUR: " << convertedAmount << endl;
                break;

            case 5:
                cout << "Exiting Currency Converter..." << endl;
                break;

            default:
                cout << "Invalid choice! Please select a valid option." << endl;
        }

    } while(choice != 5);

    return 0;
}