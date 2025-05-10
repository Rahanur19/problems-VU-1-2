#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int code;

public:
    Person(string n, int c) {
        name = n;
        code = c;
    }
};

class Account : virtual public Person {
protected:
    double pay;

public:
    Account(string n, int c, double p) : Person(n, c) {
        pay = p;
    }
};

class Admin : virtual public Person {
protected:
    int experience;

public:
    Admin(string n, int c, int exp) : Person(n, c) {
        experience = exp;
    }
};

class Master : public Account, public Admin {
public:
    Master(string n, int c, double p, int exp) 
        : Person(n, c), Account(n, c, p), Admin(n, c, exp) {}
    
    void display() {
        cout << "Name: " << name << endl << "Code: " << code
             << endl << "Pay: " << pay << endl << "Experience: " << experience 
             << " years" << endl << endl;
    }
};

int main() {
    Master m1("Rahanur Rahman", 1001, 50000.0, 5);
    m1.display();
    return 0;
}
