//6. Write a C++ program to generate the first n numbers of the Fibonacci sequence, where n is provided by the user.

#include <iostream>
using namespace std;

void fibonacci(int n){
    int previous=0, current=1, next,i;
    cout<<"Elements of fibonacci series for the length of "<<n<<" : "<<endl;
    //cout<<current<<"\t";
    for (i=0; i<n; i++){
        cout<<current<<"\t";
        next = previous + current;
        previous = current;
        current = next;
    }
}

int main(){
    int num;
    cout<<"Enter the length of fibonacci : ";
    cin>>num;
    fibonacci(num);

    return 0;
}