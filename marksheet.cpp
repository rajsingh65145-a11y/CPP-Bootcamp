#include <iostream>
using namespace std;

// Parent Class 1
class Student
{
public:
    string name;
    int rollNo;

    void getStudent()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }
};

// Parent Class 2
class Marks
{
public:
    int math, science, english;

    void getMarks()
    {
        cout << "Enter Maths Marks: ";
        cin >> math;

        cout << "Enter Science Marks: ";
        cin >> science;

        cout << "Enter English Marks: ";
        cin >> english;
    }
};

// Child Class
class Result : public Student, public Marks
{
public:
    int total;
    float percentage;

    void calculate()
    {
        total = math + science + english;
        percentage = total / 3.0;
    }

    void putData()
    {
        cout << "\n========== MARKSHEET ==========\n";
        cout << "Name       : " << name << endl;
        cout << "Roll No    : " << rollNo << endl;
        cout << "Maths      : " << math << endl;
        cout << "Science    : " << science << endl;
        cout << "English    : " << english << endl;
        cout << "-------------------------------" << endl;
        cout << "Total      : " << total << endl;
        cout << "Percentage : " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result     : PASS" << endl;
        else
            cout << "Result     : FAIL" << endl;
    }
};

int main()
{
    Result r;

    r.getStudent();
    r.getMarks();

    r.calculate();

    r.putData();

    return 0;
}