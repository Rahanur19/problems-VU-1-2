//1. Write a C++ program that prints your name, id, department, semester, and section.

#include <iostream>
using namespace std;

void studentInfo(string name, int ID, string dept, string sem, char sec){
    cout<<"Name : "<<name<<endl;
    cout<<"ID : "<<ID<<endl;
    cout<<"Department : "<<dept<<endl;
    cout<<"Semester : "<<sem<<endl;
    cout<<"Section : "<<sec<<endl;

}

int main(){

    studentInfo("Rahanur Rahman", 242311071, "CSE", "2nd", 'B');

    return 0;
}