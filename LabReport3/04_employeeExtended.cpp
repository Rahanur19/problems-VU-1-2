#include <iostream>
using namespace std;

class Education {
protected:
    string highestQualification;
    string professionalQualification;

public:
    Education(string hq, string pq) {
        highestQualification = hq;
        professionalQualification = pq;
    }
};

class Staff {
protected:
    int code;
    string name;

public:
    Staff(int c, string n) {
        code = c;
        name = n;
    }
    virtual void display() {
        cout << "Code: " << code << endl << "Name: " << name << endl;
    }
};

class Teacher : public Staff, public Education {
    string subject;
    string publication;

public:
    Teacher(int c, string n, string s, string p, string hq, string pq) 
        : Staff(c, n), Education(hq, pq) {
        subject = s;
        publication = p;
    }
    
    void display() override {
        Staff::display();
        cout << "Type: Teacher" << endl << "Subject: " << subject 
             << endl << "Publication: " << publication
             << endl << "Highest Qualification: " << highestQualification
             << endl << "Professional Qualification: " << professionalQualification 
             << endl << endl;
    }
};

class Officer : public Staff, public Education {
    string grade;

public:
    Officer(int c, string n, string g, string hq, string pq) 
        : Staff(c, n), Education(hq, pq) {
        grade = g;
    }
    
    void display() override {
        Staff::display();
        cout << "Type: Officer" << endl << "Grade: " << grade
             << endl << "Highest Qualification: " << highestQualification
             << endl << "Professional Qualification: " << professionalQualification 
             << endl << endl;
    }
};

int main() {
    Teacher t1(1001, "Rahanur Rahman", "Physiccs", "Thermodynamics", "PhD", "Teaching Cert");
    Officer o1(1002, "Rohan", "Grade-6", "MBA", "Management Cert");
    
    t1.display();
    o1.display();
    
    return 0;
}
