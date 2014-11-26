#include <conio.h>
#include <iostream.h>
#include <ctype.h>
using namespace std;

char fc (void)
{
     char c[100];
     int i,x=0,k;
     gets(c);
     i=strlen(c);
     cout<<"output symbols:"<<endl;
     for(k=0; k<=i; k++)
     {
     if (isalpha (c[k]))
    { cout<<c[k];
     x++;}
     }
     cout<<endl;
     cout<<"count "<<x;}
     int main ()
     {
         fc();
         getch();
         return 0;
         }  
