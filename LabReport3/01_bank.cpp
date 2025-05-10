#include <iostream>
#include <cmath>
using namespace std;

class Account {
protected:
    string customerName;
     int accountNumber;
    string accountType;
    double balance;

public:
    void  setInitialValues(string name,  int accNum, string accType, double initialBalance) {
        customerName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
    void displayBalance() {
        cout << "Account Balance: " << balance << endl;
    }
    virtual void computeInterest() {}
    virtual void withdraw(double amount) {}
    virtual void checkMinimumBalance() {}
};

class SavAcc : public Account {
private:
    double interestRate;

public:
    void initializeSavings(string name,  int accNum, double initialBalance, double rate) {
         setInitialValues(name, accNum, "Savings", initialBalance);
        interestRate = rate;
    }
    void computeInterest() override {
        double interest = balance * pow(1 + interestRate / 100, 1) - balance;
        balance += interest;
        cout << "Interest of " << interest << " deposited. New balance: " << balance << endl;
    }

    void withdraw(double amount) override {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }
};

class CurAcc : public Account {
private:
    double minimumBalance;
    double serviceCharge;

public:
    void initializeCurrent(string name,  int accNum, double initialBalance, double minBal, double charge) {
         setInitialValues(name, accNum, "Current", initialBalance);
        minimumBalance = minBal;
        serviceCharge = charge;
    }

    void withdraw(double amount) override {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
            checkMinimumBalance();
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }

    void checkMinimumBalance() override {
        if (balance < minimumBalance) {
            balance -= serviceCharge;
            cout << "Service charge of " << serviceCharge << " imposed for falling below minimum balance." << endl;
            cout << "New balance: " << balance << endl;
        }
    }
};

int main() {
    SavAcc savings;
    savings.initializeSavings("Rahanur Rahman", 10001, 5000.0, 5.0);

    CurAcc current;
    current.initializeCurrent("Rohan", 20001, 10000.0, 2000.0, 50.0);

    cout << "\nSavings Account Operations:\n";
    savings.displayBalance();
    savings.deposit(2000);
    savings.withdraw(1000);
    savings.computeInterest();

    cout << "\nCurrent Account Operations:\n";
    current.displayBalance();
    current.deposit(5000);
    current.withdraw(12000); 
    current.withdraw(1000);

    return 0;
}
