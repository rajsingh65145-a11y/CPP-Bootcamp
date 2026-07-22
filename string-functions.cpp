#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[50]="hello";
    char str2[50]="world";
    char str3[50];


// strcpy//
strcpy(str3,str1);
cout<<"After strcpy():"<<str3<<endl;// str1 ,str3 me copye ho jayega aur str3 hi print ho jayega//

// strcat//
strcat(str1,str2);
cout<<"After strcat():"<<str1<<endl;

// strlen //
cout << "lenght of str1:"<<strlen(str1)<<endl;

// strcmp()//
int result=strcmp(str1,str2); // comparison character wise means ascii se hoga ek word (str1) ek word str2 ka compare hoga//
// dono ki ascii value ko minus karenge jo value milgei usi se compare hoga//

if (result==0)
cout<<"both strings are equal"<<endl;
else if(result>0)
cout<<"str1 is greater than str2"<<endl;
else
cout<<"str1 is samller than str2"<<endl;

// strrev//
strrev(str1);
cout<<"after strrev():"<<str1<<endl;

return 0;
}