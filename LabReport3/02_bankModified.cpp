#include <iostream>
#include <cmath>
using namespace std;

class Account {
protected:
    string customerName;
    long accountNumber;
    string accountType;
    double balance;

public:
    Account(string name, long accNum, string accType, double initialBalance) {
        customerName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit done. New balance is: " << balance << endl;
        } else {
            cout << "Invalid depositt amount." << endl;
        }
    }

    void displayBalance() {
        cout << "Account Balance is: " << balance << endl;
    }

    virtual void computeInterest() {}
    virtual void withdraw(double amount) {}
    virtual void checkMinimumBalance() {}
};

class SavAcc : public Account {
private:
    double interestRate;

public:
    SavAcc(string name, long accNum, double initialBalance, double rate)
        : Account(name, accNum, "Savings", initialBalance) {
        interestRate = rate;
    }

    void computeInterest() override {
        double interest = balance * pow(1 + interestRate/100, 1) - balance;
        balance += interest;
        cout << "Interest of " << interest << " deposited. New balance os: " << balance << endl;
    }

    void withdraw(double amount) override {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << " withdraw done. New balance is: " << balance << endl;
        } else {
            cout << "Invalid withdrawsl amount or insuffitient funds." << endl;
        }
    }
};

class CurAcc : public Account {
private:
    double minimumBalance;
    double serviceCharge;

public:
    CurAcc(string name, long accNum, double initialBalance, double minBal, double charge)
        : Account(name, accNum, "Current", initialBalance) {
        minimumBalance = minBal;
        serviceCharge = charge;
    }

    void withdraw(double amount) override {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << " withdraw  done. New balance is: " << balance << endl;
            checkMinimumBalance();
        } else {
            cout << "Invalid  withdraw amount or insufficient funds." << endl;
        }
    }

    void checkMinimumBalance() override {
        if (balance < minimumBalance) {
            balance -= serviceCharge;
            cout << "Service charge of " << serviceCharge << " for falling minimum balance." << endl;
            cout << "New balance is: " << balance << endl;
        }
    }
};

int main() {
    SavAcc savings("Rahanur Rahman", 10001, 5000.0, 5.0);
    
    CurAcc current("Rohan", 20001, 10000.0, 2000.0, 50.0);
    
    cout <<endl<< "savings Account Operations: "<<endl;
    savings.displayBalance();
    savings.deposit(2000);
    savings.withdraw(1000);
    savings.computeInterest();
    
    cout <<endl<< "Current Account Operations:  "<<endl;
    current.displayBalance();
    current.deposit(5000);
    current.withdraw(12000); 
    current.withdraw(1000);
    

    cout<<"hello world";
    return 0;
}