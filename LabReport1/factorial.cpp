//5. Write a C++ program that calculates the factorial of a given number using a loop.

#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1, i;
    for (i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter a number to get factorial : ";
    cin>>n;
    cout<<n<<"! = "<<factorial(n);
}