#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double balance = 5000.00;
    int choice;
    double amount;
    
    cout << "===== ATM SIMULATION =====" << endl;
    
    while (true) {
        cout << "\n1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        
        cout << fixed << setprecision(2);
        
        switch (choice) {
            case 1:
                cout << "Your current balance: Rs. " << balance << endl;
                break;
                
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid amount!" << endl;
                } else {
                    balance += amount;
                    cout << "Deposited Rs. " << amount << " successfully!" << endl;
                    cout << "New balance: Rs. " << balance << endl;
                }
                break;
                
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid amount!" << endl;
                } else if (amount > balance) {
                    cout << "Insufficient balance!" << endl;
                } else {
                    balance -= amount;
                    cout << "Withdrawn Rs. " << amount << " successfully!" << endl;
                    cout << "Remaining balance: Rs. " << balance << endl;
                }
                break;
                
            case 4:
                cout << "Thank you for using ATM. Goodbye!" << endl;
                return 0;
                
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    
    return 0;
}
