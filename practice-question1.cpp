#include<iostream>
using namespace std;

int main(){
    char str[100];

    cout<<"Enter string:";
    cin.getline(str,100);

    cout<<"original String"<<str<<endl;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&& str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }

    cout<<"Lowercase string"<<str<<endl;

    return 0;
}