#include<iostream>
using namespace std;

class student{
     public:
        string  name;
        int rno;
        float gpa;
        
        student(string s,int r, float g){
            name=s;
            rno=r;
            gpa=g;
        };
};

int main(){
    student s1("harsh singh",76,8.2);
    student s2("karan shah ",72,8.6);
    cout<<" "<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
     cout<<" "<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
}