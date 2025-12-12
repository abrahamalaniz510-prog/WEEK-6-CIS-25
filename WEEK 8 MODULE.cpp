//WEEK 8 MODULE

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() {
        balance = 1000.0;   // Fixed starting balance
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
        saveTransaction("Deposit", amount);
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
            return;
        }
        balance -= amount;
        cout << "Withdrew: $" << amount << endl;
        saveTransaction("Withdraw", amount);
    }

    void makePurchase(string item, double cost) {
        if (cost > balance) {
            cout << "Insufficient funds for " << item << endl;
        } else {
            balance -= cost;
            cout << "Purchased " << item << " for $" << cost << endl;
            saveTransaction("Purchase - " + item, cost);
        }
    }

    void displayFinalBalance() {
        cout << "\nFinal Balance: $" << balance << endl;
    }

    void saveTransaction(string type, double amount) {
        ofstream file("transactions.txt", ios::app);
        if (file.is_open()) {
            file << type << ": $" << amount << endl;
            file.close();
        }
    }
};

int main() {
    BankAccount myAccount;  // Starts at 1000
    
    cout << "Initial Balance: $1000" << endl;

    // Deposit
    double depositAmount;
    cout << "Enter deposit amount: ";
    cin >> depositAmount;
    myAccount.deposit(depositAmount);


    // Two purchases
    for (int i = 1; i <= 2; i++) {
        string item;
        double cost;

        cout << "\nPurchase " << i << " - Enter item name: ";
        cin >> item;

        cout << "Enter cost: ";
        cin >> cost;

        myAccount.makePurchase(item, cost);
    }

    // Print final balance
    myAccount.displayFinalBalance();

    return 0;
}
