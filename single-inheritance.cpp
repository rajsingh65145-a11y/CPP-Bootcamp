#include<iostream>
using namespace std;

// parent class //

class person
{
    public:
    string name;
    int age;

};
 
// child class //

class student:public person

{
    public:
    int rollno;
    
};

int main()
{
    student s1;

    s1.name="harsh";
    s1.age=19;
    s1.rollno=101;

    cout <<"name:"<<s1.name<<endl;
    cout<<"age:"<<s1.age<<endl;
    cout<<"roll no:"<<s1.rollno<<endl;
    return 0;
}