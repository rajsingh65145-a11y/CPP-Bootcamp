#include<iostream>
using namespace std;

// parent class 1 //

class student
{
    public:
    string name;
    int rollno;

    void getstudent()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter roll number:";
        cin>>rollno;
    }
};

//parent class 2 //

class marks
{
    public:
    int marks;
    void getmarks()
    {
        cout<<"Enter marks:";
        cin>>marks;
    }
};

// child class //

class result:public student,public marks
{
    public:
    void display()
    {
        cout<<"\n ---student details---"<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"roll number:"<<rollno<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};

int main()
{
    result r1;
    r1.getstudent();
    r1.getmarks();
    r1.display();
    return 0;
}