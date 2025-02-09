#include <iostream>
using namespace std;

class Employee{
    private:
    string name;
    int id;
    float salary;
    float performance;


    public:
    void getValue(){
        cout<<"Enter the name of the employee : ";
        getline(cin, name);
        cout<<"Enter the ID of the employee : ";
        cin>>id;
        //cin.ignore();
        cout<<"Enter the salary of the employee : ";
        cin>>salary;
        cout<<"Enter a performance score out of 10 : ";
        cin>>performance;
        if(performance<1 || performance >10 ){
            cout<<"Invalid performance score input."<<endl;
            performance =0;
        }
        
    }

    float salaryOnPerformance(float salary){
        if(performance){
            if (performance >= 8) return salary*1.3;
            else if (performance >= 7.5 && performance <8) return salary*1.15;
            else return salary;
        }

        return 0;

    }

    void displayValue(){
        if (performance){
            cout<<endl<<"----Employee Info----"<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"ID : "<<id<<endl;
            cout<<"Total salary on performance : "<<salaryOnPerformance(salary)<<endl;
        }
    }
};

int main(){
    Employee  e1;
    e1.getValue();
    e1.displayValue();

    return 0;
}