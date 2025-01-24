//3. Write a C++ program to find the largest of three numbers provided by the user.

#include <iostream>
using namespace std;
float findlargest(float numbers[3]){
    int i;
    float max = numbers[0];
    for (i=1; i<3; i++)
        if (max<numbers[i])
            max = numbers[i];

    return max;

}

int main(){
    cout<<"Enter 3 numbers to find the largest one : ";
    float nums[3];
    for(int i=0; i<3; i++){
        cin>>nums[i];      
    }
    cout<<"The largest number among \t"<<nums[0]<<",\t"<<nums[1]<<",\t"<<nums[2]<<"\t is : "<<findlargest(nums);


    return 0;
}