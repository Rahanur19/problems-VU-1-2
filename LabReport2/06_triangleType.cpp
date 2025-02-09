#include <iostream>
using namespace std;

class Triangle{
    private:
    float a;
    float b;
    float c;

    public:
    void getValue(){
        cout<<"Enter the three sides of the triangle (A, B, C) : ";
        cin>>a>>b>>c;
    }

    void displayValue(){
        if (a==b && a==c) cout<<"The trianlge is Equilateral";
        else if (a==b || a==c || b==c) cout<<"The trianlge is Isosceles ";
        else cout<<"The trianlge is Scalene ";   
    }
};

int main(){
    Triangle  t1;
    t1.getValue();
    t1.displayValue();

    return 0;
}