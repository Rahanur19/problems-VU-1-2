#include <iostream>
using namespace std;

class Product {
protected:
    string name;
    double price;
    int quantity;

public:
    Product(string n, double p, int q) {
        name = n;
        price = p;
        quantity = q;
    }
    virtual void display() {
        cout << "Name: " << name << endl << "Price : " << price 
             << endl << "Quantity: " << quantity << endl;
    }
};

class Electronics : public Product {
    string warranty;

public:
    Electronics(string n, double p, int q, string w) : Product(n, p, q) {
        warranty = w;
    }
    void display() override {
        Product::display();
        cout << "Category: Electronics" << endl << "Warranty: " << warranty << endl << endl;
    }
};

class FoodItem : public Product {
    string expiryDate;

public:
    FoodItem(string n, double p, int q, string ed) : Product(n, p, q) {
        expiryDate = ed;
    }
    void display() override {
        Product::display();
        cout << "Category: Food" << endl << "Expiry Date: " << expiryDate << endl << endl;
    }
};

int main() {
    Electronics e1("Router", 999.99, 5, "2 years");
    FoodItem f1("Cake", 2.99, 50, "2023-12-31");
    
    e1.display();
    f1.display();
    
    return 0;
}
