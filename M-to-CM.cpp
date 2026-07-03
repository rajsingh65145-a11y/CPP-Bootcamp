#include<iostream>
using namespace std;

class convert {
    float meter,cm;

    public:
    
    void getdata(){
        cout<<"enter value of meter";
        cin>>meter;
    }

    void putdata(){
        cm=meter*100;
        cout<<"centimeter="<<cm<<endl;

    }
};

int main(){
    convert obj;
    
    obj.getdata();
    obj.putdata();
    return 0;
}