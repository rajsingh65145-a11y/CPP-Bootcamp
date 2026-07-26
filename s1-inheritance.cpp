#include<iostream>
using namespace std;

    class A{
        public:
        int data1;
        void m1(){
            cout<<"m1 method"<<endl;
        }
    };

    class B:public A{
        public:
        int data2;
        void m2(){
            cout<<"m2 methods"<<endl;
        }
    };

    int main(){
        B b1;
        b1.m1();
        b1.m2();
        return 0;
    }
