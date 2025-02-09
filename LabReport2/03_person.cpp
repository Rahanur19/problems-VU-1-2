#include <iostream>
using namespace std;

class Person{
    private:
    string name;
    int age;
    string country;

    public:
    void getValue(){
        cout<<"Enter the name of the person : ";
        getline(cin, name);
        cout<<"Enter the age of the person : ";
        cin>>age;
        cin.ignore();
        cout<<"Enter the country of the person : ";
        getline(cin, country);
    }

    void displayValue(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Country : "<<country<<endl;
    }
};

int main(){
    Person  p1;
    p1.getValue();
    p1.displayValue();

    return 0;
}