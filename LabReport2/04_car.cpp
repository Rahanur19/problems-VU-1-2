#include <iostream>
using namespace std;

class Car{
    private:
    string company;
    string model;
    int year;

    public:
    void getValue(){
        cout<<"Enter the company of the car : ";
        getline(cin, company);
        cout<<"Enter the model of the car : ";
        getline(cin, model);
        cout<<"Enter the release year of the car : ";
        cin>>year;
        //cin.ignore();
    }

    void displayValue(){
        cout<<"Company : "<<company<<endl;
        cout<<"Model : "<<model<<endl;
        cout<<"Release Year : "<<year<<endl;
    }
};

int main(){
    Car  c1;
    c1.getValue();
    c1.displayValue();

    return 0;
}