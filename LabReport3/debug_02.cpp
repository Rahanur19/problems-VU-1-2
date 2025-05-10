#include <iostream>
using namespace std;

class four_seater {
public: 
    void Property() {
        cout << "It has space for four persons" << endl;
    }
};

class four_wheeler {
public: 
    void Property() {
        cout << "It runs on four tyres" << endl;
    }
};

class Car : public four_seater, public four_wheeler {
public:
    void showProperties() {
        four_seater::Property();  // Properly called base class methods
        four_wheeler::Property();
    }
};

int main() {
    Car C1;
    C1.showProperties();
    return 0;
}