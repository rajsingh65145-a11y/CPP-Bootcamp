#include<iostream>
using namespace std;

class Car{
    public:
    string name;
    int price;
    int seats;
    string type;
};
void print(Car c){  // ek function banaya hai jaha car class object ko pass karke use kar sake //
cout<<"Car Name: "<<c.name<<endl;
cout<<"Price: "<<c.price<<endl;
cout<<"Seats: "<<c.seats<<endl;
cout<<"Type: "<<c.type<<endl;
}
int main(){
    Car c1;
    c1.name="BMW";
    c1.price=50000;
    c1.seats=4;
    c1.type="Sedan";


    Car c2;
    c2.name="Audi";
    c2.price=60000;
    c2.seats=5;
    c2.type="SUV";

    Car c3;
    c3.name="Mercedes";
    c3.price=70000;
    c3.seats=5;
    c3.type="Sedan";

    print(c1);
    print(c2);
    print(c3);
}