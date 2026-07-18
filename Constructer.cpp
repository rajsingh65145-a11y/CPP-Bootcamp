#include<iostream>
using namespace std;

class Car{
    public:
    string name;
    int price;
    int seats;
    string type;

    Car(int p,string n,string t,int s){
       price=p;
       name=n;
       type=t;
       seats=s;
    }
};

/*
void print(Car c){  // ek function banaya hai jaha car class object ko pass karke use kar sake //
cout<<"Car Name: "<<c.name<<endl;
cout<<"Price: "<<c.price<<endl;
cout<<"Seats: "<<c.seats<<endl;
cout<<"Type: "<<c.type<<endl;
}

void change(Car& c){  // & lagane ke badd value change ho jayegi aur pass by raferance ho jayegi normal passing by values hota hai
  c.name="Toyota";
}*/
int main(){
/*cout <<x<<endl;
  int x=4;
  change(x); // yaha pe jo vlaue baad me hum pass kar rahe hai wahi function me jayega//
    cout<<x<<endl;*/
 Car c1(150000,"honda suzuki","seadan",5);

/*    Car c1;
    c1.name="BMW";
    c1.price=50000;
    c1.seats=4;
    c1.type="Sedan";
*/

   /*print(c1);
    change(c1);
    print(c1);

   /* Car c2;
    c2.name="Audi";
    c2.price=60000;
    c2.seats=5;
    c2.type="SUV";

    Car c3;
    c3.name="Mercedes";
    c3.price=70000;
    c3.seats=5;
    c3.type="Sedan";*/

   /*print(c1);
    print(c2);
    print(c3);*/
cout<<c1.price<<" "<<c1.name<<" "<<c1.type<<" "<<c1.seats<<endl;
    return 0;
}