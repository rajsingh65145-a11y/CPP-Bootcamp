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





student s6(s1);//copy constructer//

s6.name="jay";


    cout<<" "<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
     cout<<" "<<s6.name<<" "<<s6.rno<<" "<<s6.gpa<<endl;
}