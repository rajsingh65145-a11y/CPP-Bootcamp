#include<iostream>
using namespace std;

class fraction{
    public:
    int num;
    int den;
    fraction(int num, int den){
    this->num=num;
    this->den=den;

    }
    void display(){
        cout<<num<<"/"<<den<<endl;
    }
    fraction operator+(fraction f){
        int newnum=this->num*f.den+f.num*this->num;
        int newden=this->den*f.den;
        fraction f3(newnum,newden);
        return f3;
    }
};


int main (){
    fraction f1(1,2);
    fraction f2(1,3);

    f1.display();
      f2.display();
      fraction f3=f1+f2;
      f3.display();
      return 0;
}