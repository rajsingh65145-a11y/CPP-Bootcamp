#include<iostream>
using namespace std;

class cricketer{
    public:
    string name;
    int runs;
   cricketer(string n,int r){
this->name=n;
  this->runs=r;
   }

   void print(){
 
    cout<<this->name<<this->runs<<endl;
   }
};



int main(){
    cricketer c1("rituraj gaikwad",34000);
    cricketer c2("sanju samson",33000);
c1.print();
c2.print();    

};