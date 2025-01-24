//10. Write a C++ program that performs basic arithmetic operations (addition, subtraction, multiplication, division) on two numbers provided by the user. The user should be able to choose the operation.

#include <iostream>
using namespace std;

float calculate(float x, float y, char o){
    if (o == '+')
        return x+y;
    else if (o == '-')
        return x-y;
    else if (o == '*')
        return x*y;
    else if (o == '/')
        return x/y;

    return 0;
}

int main(){
    float a, b;
    char c;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter an operator (+, -, * or /) : ";
    cin>>c;
    cout<<"Enter the second number : ";
    cin>>b;

    if (calculate(a,b,c))
        cout<<endl<<"Result : "<<a <<c<<b<<" = "<<calculate(a,b,c)<<endl;
    else
        cout<<endl<<"Invalid operator input .... "<<endl;



    return 0;
}