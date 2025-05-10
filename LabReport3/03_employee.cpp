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
    virtual void display() {
        cout << "Code: " << code << endl << "Name: " << name << endl;
    }
};

class Teacher : public Staff {
    string subject;
    string publication;

public:
    Teacher(int c, string n, string s, string p) : Staff(c, n) {
        subject = s;
        publication = p;
    }
    
    void display() override {
        Staff::display();
        cout << "Type: Teacher" << endl << "Subject: " << subject 
             << endl << "Publication: " << publication << endl << endl;
    }
};

class Typist : public Staff {
protected:
    double speed;

public:
    Typist(int c, string n, double s) : Staff(c, n) {
        speed = s;
    }
};

class Regular : public Typist {
public:
    Regular(int c, string n, double s) : Typist(c, n, s) {}
    
    void display() override {
        Staff::display();
        cout << "Type: Regular Typist" << endl << "Speed: " 
             << speed << " wpm" << endl << endl;
    }
};

class Casual : public Typist {
    double dailyWages;

public:
    Casual(int c, string n, double s, double w) : Typist(c, n, s) {
        dailyWages = w;
    }
    
    void display() override {
        Staff::display();
        cout << "Type: Casual Typist" << endl << "Speed: " << speed 
             << " wpm" << endl << "Daily Wages: " << dailyWages << endl << endl;
    }
};

class Officer : public Staff {
    string grade;

public:
    Officer(int c, string n, string g) : Staff(c, n) {
        grade = g;
    }
    
    void display() override {
        Staff::display();
        cout << "Type: Officer" << endl << "Grade: " << grade << endl << endl;
    }
};

int main() {

    Teacher t1(1001, "Rahanur Rahman", "Physics", "Thermodynamics");
    Regular r1(1002, "TypeWritter1", 65.5);
    Casual c1(1003, "TypeWritter2", 55.0, 120.0);
    Officer o1(1004, "Rahanur Rahman", "Grade-6");

    cout << "Employee Database:" << endl << endl;
    t1.display();
    r1.display();
    c1.display();
    o1.display();

    cout << "hello wprld";
    return 0;
}
