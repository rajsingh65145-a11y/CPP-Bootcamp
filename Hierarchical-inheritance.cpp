#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void getA()
    {
        cout << "a: " << a << endl;
    }
};

class B : public A
{
public:
    int b;
    void getB()
    {
        cout << "b: " << b << endl;
    }
};

class C : public A
{
public:
    int c;
    void getC()
    {
        cout << "c: " << c << endl;
    }
};

class D : public A
{
public:
    int d;
    void getD()
    {
        cout << "d: " << d << endl;
    }
};

int main()
{
    B b1;
    C c1;
    D d1;

    cout << "Enter a, b (for object b1): ";
    cin >> b1.a >> b1.b;

    cout << "Enter a, c (for object c1): ";
    cin >> c1.a >> c1.c;

    cout << "Enter a, d (for object d1): ";
    cin >> d1.a >> d1.d;

    cout << "\n--- Output ---" << endl;
    b1.getA();
    b1.getB();

    c1.getA();
    c1.getC();

    d1.getA();
    d1.getD();

    return 0;
}