/*Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account. */
#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNumber, double initial_Balance){
        accountNumber=accNumber;
        balance=initial_Balance;
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful...\nbalance : " << balance <<endl;
        } else {
            cout<< "Invalid" <<endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful.."<<endl;
        } else {
            cout<< "Invalid withdrawal amount" <<endl;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount myAc(00741, 50000.0);

    cout<< "your balance: " << myAc.getBalance() <<endl;
    myAc.deposit(10000.0);
    myAc.withdraw(20000.0);
    cout << "Final balance: " << myAc.getBalance() <<endl;

    return 0;
}
