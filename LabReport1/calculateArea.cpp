//9. Write a C++ program that includes a function to calculate the area of a circle. The function should take the radius as a parameter and return the area.

#include <iostream>
using namespace std;

float area(float rad){
    return 3.1416*rad*rad;
}

int main(){
    int r;
    cout<<"Enter the radius of the circle to calculate area : ";
    cin>>r;
    cout<<"The are of the circle is : "<<area(r)<<" square unit.";

    return 0;
}