#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float marks;

public:

    // Constructor
    Student(string n, int r, float m)
    {
        name = n;
        rollNo = r;
        marks = m;

        cout << "\nConstructor is called." << endl;
    }

    // User-defined function
    void display()
    {
        cout << "\nStudent Details" << endl;
        cout << "Name    : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Marks   : " << marks << endl;
    }

    // User-defined function
    void checkResult()
    {
        if (marks >= 40)
            cout << "Result  : Pass" << endl;
        else
            cout << "Result  : Fail" << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "\nDestructor is called." << endl;
    }
};

int main()
{
    string name;
    int rollNo;
    float marks;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter roll number: ";
    cin >> rollNo;

    cout << "Enter marks: ";
    cin >> marks;

    // Creating object
    Student s(name, rollNo, marks);

    // Calling user-defined functions
    s.display();
    s.checkResult();

    return 0;
}