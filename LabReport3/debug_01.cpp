#include <iostream>
using namespace std;

class faculty {
private:
    int fid;
    string name;
public:
    void getdata() {
        cout << "Enter faculty id: \t";
        cin >> fid;
        cout << "Enter Name: \t";
        cin >> name;
    }
    
    int getFid() { return fid; }
    string getName() { return name; }
};

class details : public faculty {
public:
    int age, exp;
    void getdetails() {
        getdata();
        cout << "Enter age: \t";
        cin >> age;
        cout << "Enter year of exp.: \t";
        cin >> exp;
    }
    
    void display() { 
        cout << "\n\nFaculty id \t" << getFid() << endl;
        cout << "Name of faculty \t" << getName() << endl;
        cout << "Faculty age \t" << age << endl;
        cout << "Faculty year of exp \t" << exp << endl;
    }
};

int main() {
    details m;
    m.getdetails();
    m.display();
    return 0;
}