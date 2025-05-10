#include <iostream>
using namespace std;

class Vehicle {
protected:
    string type;
    string model;
    double price;

public:
    Vehicle(string t, string m, double p) {
        type = t;
        model = m;
        price = p;
    }
    virtual void display() {
        cout << "Type: " << type << endl << "Model: " << model 
             << endl << "Price: $" << price << endl;
    }
};

class TwoWheeler : public Vehicle {
    string transmission;

public:
    TwoWheeler(string m, double p, string trans) 
        : Vehicle("Two Wheeler", m, p) {
        transmission = trans;
    }
    void display() override {
        Vehicle::display();
        cout << "Transmission: " << transmission << endl << endl;
    }
};

class FourWheeler : public Vehicle {
    bool isAutomatic;

public:
    FourWheeler(string m, double p, bool autoFlag) 
        : Vehicle("Four Wheeler", m, p) {
        isAutomatic = autoFlag;
    }
    void display() override {
        Vehicle::display();
        cout << "Automatic: " << (isAutomatic ? "Yes" : "No") << endl << endl;
    }
};

int main() {
    TwoWheeler tw1("TVS", 8000.99, "Manual");
    TwoWheeler tw2("Harley Davidson", 1500.33, "Electric");
    FourWheeler fw1("Tesla", 30000.98, true);
    
    tw1.display();
    tw2.display();
    fw1.display();
    
    return 0;
}
