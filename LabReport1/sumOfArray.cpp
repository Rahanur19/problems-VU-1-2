//8. Write a C++ program that calculates the sum of all elements in a given array of integers.

#include <iostream>
using namespace std;

int sumOfArray(int arr[], int len){
    int i, sum = 0;
    //int len = sizeof(arr)
    //sizeof(arr) gives the size of arr[] pointer, not the actual size . So I have to pass length of the array individually
    for (i=0; i<len; i++)
        sum += arr[i];
    
    return sum;
}

int main(){
    int len, i;
    cout<<"Enter the length of array : ";
    cin>>len;

    int myArr[len];

    cout<<"Enter"<<len<< " elements of the array : ";
    for(i=0; i<len; i++)
        cin>>myArr[i];

    cout<<"The sum of the array is : "<< sumOfArray(myArr, len);

    return 0;
}