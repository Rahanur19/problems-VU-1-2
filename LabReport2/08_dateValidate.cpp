#include <iostream>
using namespace std;

class Date{
private :
    int day;
    int month;
    int year;

public :
    int getValue(){
        cout<<"Enter the day : ";
        cin>>day;
        if (day>31 || day<1){
            cout<<"The day cant be negative or zero or can never be more than 31";
            return 0;
        }
        cout<<"Enter the month : ";
        cin>>month;
        if (month>12 || month<1){
            cout<<"The month cant be negative or zero or can never be more than 12";
            return 0;
        }
        cout<<"Enter the year : ";
        cin>>year;
        if (year<1){
            cout<<"The year cant be negative or zero.";
            return 0;
        }

        return 0;
        
        }

    bool check31();
    bool check30();
    bool checkLeapYear();

    void showResult(int expected);
    void showResult();

    void checkValidity(){
            if (day && month && year){
                if (check31()){
                    showResult();
                }
                else if (check30()){
                    showResult(30);
                }

                else if (month == 2){
                    if (checkLeapYear()){
                        showResult(29);
                    }
                    else{
                        showResult(28);
                    }
                }
            }
        }


};

int main(){

    Date d1;
    d1.getValue();
    d1.checkValidity();



    return 0;
}


    bool Date:: check31(){
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ) return 1;
        else return 0;

    }
    bool Date:: check30(){
        if(month == 4 || month == 6 || month == 9 || month == 11) return 1;
        else return 0;

    }

    bool Date:: checkLeapYear(){
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) return 1;
        else return 0;
    }

    void Date:: showResult(int expected){
        if (day >expected) cout<<"The date doesnt exist.";
        else cout<<"The date : "<<day<<"/"<<month<<"/"<<year<<" exists."<<endl;
    }
    void Date:: showResult(){
        cout<<"The date : "<<day<<"/"<<month<<"/"<<year<<" exists."<<endl;
    }