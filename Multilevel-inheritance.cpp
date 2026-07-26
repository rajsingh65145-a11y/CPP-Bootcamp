#include<iostream>
using namespace std;

    class A{
        public:
        int data1;
        void m1(){
            cout<<"m1 method"<<endl;
        }
    };

    class B{
        public:
        int data2;
        void m2(){
            cout<<"m2 method"<<endl;
        }
    };

     class C:public B,public A{
        public:
        int data2;
        void m3(){
            cout<<"m3 method"<<endl;
        }
     };

    int main(){
        C c1;
        c1.m1();
        c1.m2();
        c1.m3();
        return 0;
    }
