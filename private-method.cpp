#include<iostream>
using namespace std;

class student
{
    private:
    int marks;
    
    public:
    void setmarks(int m)
    {
        marks=m;
    }
    void getmarks()
    {
        cout<<marks;
    }
};

int main()
{
     student s1;

    s1.setmarks(95);
  s1.getmarks();
  return 0;
}