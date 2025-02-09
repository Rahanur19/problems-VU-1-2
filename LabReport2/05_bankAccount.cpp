#include <iostream>
using namespace std;

class Account{
private :
    int accountNumber;
    float accountBalance = 0;
    float depositValue;
    float withdrawValue;
    char c;
    char q='y';


public:
    void set_value(){
    cout<<"Enter the account number : ";
    cin>>accountNumber;

    }

    void show_initials(){
        cout<<"Your account number is : "<<accountNumber<<"\nYour account balance is : "<<accountBalance<<endl;
    }


    void deposit(){
        cout<<"Enter the deposit amount : ";
        cin>>depositValue;
        accountBalance +=depositValue;

        cout << "After depositing "<< depositValue<< "\nYour account balance is : "<<accountBalance<<endl;

    }

    void withdraw(){
        cout<<"Enter the withdraw amount : ";
        cin>>withdrawValue;
        if (withdrawValue<accountBalance)
            {accountBalance -=withdrawValue;
        cout << "After withdrawing "<< withdrawValue<< "\nYour account balance is : "<<accountBalance<<endl;}
        else
            cout<<"Withdraw cant be more than your balance."<<endl;
    }


    
    void options(){
        
        while (q != 'n'){
            cout<<"Enter an option (w for withdraw, d for deposit) : ";
            cin>>c;
            if (c =='w')
                withdraw();
            else if(c=='d')
                deposit();\
            else
            cout<<"Invalid option input"<<endl;
        cout<<"Do you want to continue transaction ? (y/n) : ";
        cin>>q;

        }

    }

};

int main(){
   Account a1;
   a1.set_value();
   a1.show_initials();
   a1.options();
}
