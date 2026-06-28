#include<iostream>
using namespace std;

class student
{
    public:

       string name;
       int age;
};

int main()
{
    student s1;  // student class me ab ek s1 object hai //

    s1.name="Harsh";
    s1.age=19;

    cout<<s1.name<<endl;
    cout<<s1.age;

    return 0;
}