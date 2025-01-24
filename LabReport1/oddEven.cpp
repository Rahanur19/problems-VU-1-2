//4. Write a C++ program that checks whether a given integer is even or odd.

#include <iostream>
using namespace std;
string oddEvenCheck(int num){
    if (num%2==0)
        return "even number";
    else 
        return "odd number";

}

int main(){
    int n;
    cout<<"Enter a integer number to check even or odd : ";
    cin>>n;
    cout<<n<< " is an "<<oddEvenCheck(n);

}