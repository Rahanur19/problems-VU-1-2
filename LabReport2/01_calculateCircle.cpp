#include <iostream>
using namespace std;

class Circle{
    private:
    float radius;

    public:
    void getValue(){
        cout<<"Enter the radius of the circle : ";
        cin>>radius;
    }

    float caculateArea(){
        return 3.1416*radius*radius;
    }
    float caculateCircumference(){
        return 2*3.1416*radius;
    }

    void displayValue(){
        cout<<"Area : "<<caculateArea()<<endl;
        cout<<"Circumference : "<<caculateCircumference()<<endl;
    }
};

int main(){
    Circle c1;
    c1.getValue();
    c1.displayValue();

    return 0;
}