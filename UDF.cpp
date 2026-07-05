#include<iostream>
using namespace std;

class Student{
    public:// student is a new data type created by me//
    string name;
    int rno;
    float gpa;
    int age;
    
};

int main(){
    Student s1;
  s1.name="harsh";
   // s1.rno=76;
   
    s1.gpa=8.5;
    s1.age=20;
    cin>>s1.rno;

    Student s2;
    s2.name="karan";
   s2.rno=30;
     
    s2.gpa=7.6;
    s2.age=19;

    Student s3;
   s3.name="krishna";
    s3.rno=73;
    s3.gpa=8.2;
    s3.age=19;

  //  cout<<"Name of student 1 is "<<s1.name<<endl;
    cout<<"rno of student 1 is "<<s1.rno<<endl;
    /*
    cout<<"gpa of student 1 is "<<s1.gpa<<endl;
    cout<<"age of student 1 is"<<s1.age<<endl;

    cout<<"Name of student 2 is "<<s2.name<<endl;
    cout<<"rno of student 2 is "<<s2.rno<<endl;
    cout<<"gpa of student 2 is "<<s2.gpa<<endl;
    cout<<"age of student 2 is"<<s2.age<<endl;


    cout<<"Name of student 3 is "<<s3.name<<endl;
    cout<<"rno of student 3 is "<<s3.rno<<endl;
    cout<<"gpa of student 3 is "<<s3.gpa<<endl;
    cout<<"age of student 3 is"<<s3.age<<endl;


*/


    return 0;
};