#include <iostream>
using namespace std;

class Staff {
protected:
    int code;
    string name;

public:
    Staff(int c, string n) {
        code = c;
        name = n;
    }
    void display() {
        cout << "Code: " << code << endl << "Name: " << name << endl;
    }
};

class Teacher {
    Staff staff;
    string subject;
    string publication;

public:
    Teacher(int c, string n, string s, string p) : staff(c, n) {
        subject = s;
        publication = p;
    }
    
    void display() {
        staff.display();
        cout << "Type: Teacher" << endl << "Subject: " << subject 
             << endl << "Publication: " << publication << endl << endl;
    }
};

class Officer {
    Staff staff;
    string grade;

public:
    Officer(int c, string n, string g) : staff(c, n) {
        grade = g;
    }
    
    void display() {
        staff.display();
        cout << "Type: Officer" << endl << "Grade: " << grade << endl << endl;
    }
};

int main() {
    Teacher t1(1001, "Rahanur Rahman", "CSE", "Alogorithm");
    Officer o1(1002, "Rohan", "Grade-6");
    
    t1.display();
    o1.display();
    
    return 0;
}
