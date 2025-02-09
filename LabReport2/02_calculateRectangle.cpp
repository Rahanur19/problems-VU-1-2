#include <iostream>
using namespace std;

class Rectangle{
    private:
    float height;
    float weidth;

    public:
    void getValue(){
        cout<<"Enter the height of the rectangle : ";
        cin>>height;
        cout<<"Enter the weidth of the rectangle : ";
        cin>>weidth;
    }

    float caculateArea(){
        return height*weidth;
    }
    float caculatePerimeter (){
        return 2*(height + weidth);
    }

    void displayValue(){
        cout<<"Area : "<<caculateArea()<<endl;
        cout<<"Perimeter  : "<<caculatePerimeter()<<endl;
    }
};

int main(){
    Rectangle  r1;
    r1.getValue();
    r1.displayValue();

    return 0;
}