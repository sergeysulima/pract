#include<iostream>
#include <string.h>
#include <ctype.h>
#include <windows.h>
using namespace std;

struct task
{
       char name[100];
       };
       int main (){
           task worker [10];
           int x=0, i=0, b=0;
           char c[100];
           cout<<"Enter strings"<<endl;
           for(int ii=0; ii<3; ii++)
           {
           gets(c);
           if(c=="e")
           {
           x=1;
           cout<<"true\n";
           }
           {
           if(isdigit(c[0]))
           {b++;}
           strcpy(worker[i].name,c);
           i++;}
           }
           cout<<"number of strings entered:"<<i<<endl;
           cout<<"number of first-digit-strings:"<<b<<endl;
           system("pause");
           } 
