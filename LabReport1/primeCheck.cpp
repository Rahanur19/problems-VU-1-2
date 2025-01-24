//7. Write a C++ program that checks whether a given number is prime.

#include <iostream>
#include <cmath>
using namespace std;
bool check(int num){
    int i;
    for (i=2; i<=sqrt(num); i++)
        if (num%i==0)
            return false;
    return true;
}

int main(){
    int n;
    cout<<"Enter a number to check prime or not : ";
    cin>>n;
    if (n<=1)
        cout<<"Invalid input. Enter a number 2 or higher.";
    else if (n == 2)
        cout<<"2 is a prime number.";
    else{
        if(check(n))
            cout<<n<<" is a prime number.";
        else
            cout<<n<<" is a not prime number.";
    }

    return 0;
}