#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    int classNumber;
    int rollNumber;
    float mark;

    public:
    int getValue(){
        cout<<"Enter the name of the student : ";
        getline(cin, name);
        cout<<"Enter the class of the student : ";
        cin>>classNumber;
        cin.ignore();
        cout<<"Enter the roll of the student : ";
        cin>>rollNumber;
        cin.ignore();
        cout<<"Enter the mark of the student : ";
        cin>>mark;
        if(mark<1 || mark>100){
            cout<<"Enter a valid mark between 1 and 100";
            mark = 0;
            return 0;
        }
        return 0;
        
    }

    string calculateGrade(float m){
        if(mark){
            if(m<40) return "F";
            else if(m>=40 && m<45) return "D";
            else if(m>=45 && m<50) return "C";
            else if(m>=50 && m<55) return "C+";
            else if(m>=55 && m<60) return "B-";
            else if(m>=60 && m<65) return "B";
            else if(m>=65 && m<70) return "B+";
            else if(m>=70 && m<75) return "A-";
            else if(m>=75 && m<80) return "A";
            else if(m>=80) return "A+";
        }

        return "";
       
    }

    void displayValue(){
        if(mark){
            cout<<"----Studennt Info----"<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Class : "<<classNumber<<endl;
            cout<<"Roll : "<<rollNumber<<endl;
            cout<<"Mark : "<<mark<<endl;
            cout<<"Grade : "<<calculateGrade(mark)<<endl;
        }
    }
};

int main(){
    Student  s1;
    s1.getValue();
    s1.displayValue();

    return 0;
}