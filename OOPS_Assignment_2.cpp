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

    // Default Constructor
    Student()
    {
        name = "Not Given";
        rollNo = 0;
        marks = 0;

        cout << "Default constructor called." << endl;
    }

    // Parameterized Constructor
    Student(string n, int r, float m)
    {
        name = n;
        rollNo = r;
        marks = m;

        cout << "Parameterized constructor called." << endl;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        name = s.name;
        rollNo = s.rollNo;
        marks = s.marks;

        cout << "Copy constructor called." << endl;
    }

    // Member Function
    void display()
    {
        cout << "Name   : " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks  : " << marks << endl;
    }

    // Member Function
    void checkResult()
    {
        if (marks >= 40)
            cout << "Result : Pass" << endl;
        else
            cout << "Result : Fail" << endl;
    }
};

int main()
{
    cout << "----- Default Constructor -----" << endl;

    Student s1;
    s1.display();

    cout << "\n----- Parameterized Constructor -----" << endl;

    Student s2("Akshada", 21, 85);
    s2.display();
    s2.checkResult();

    cout << "\n----- Copy Constructor -----" << endl;

    Student s3(s2);
    s3.display();
    s3.checkResult();

    return 0;
}