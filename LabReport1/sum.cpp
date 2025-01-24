//2. Write a C++ program that reads two integers from the user and prints their sum.

#include <iostream>
using namespace std;

int sum(int x, int y){
    return x+y;
}

int main(){
    int a, b;
    cout<<"Enter two integer numbers to get the sum : ";
    cin>>a>>b;
    cout<<a<<" + "<<b<<" = "<<sum(a, b)<<endl;

    return 0;
}