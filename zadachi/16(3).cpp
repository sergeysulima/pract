#include<conio.h>
#include<iostream.h>
#include<math.h>
int main()
{
    setlocale(LC_ALL,"rus");
    long double a,b,h,x;
    cout<<"¬ведите начало промижутка a=";
    cin>>a;
    cout<<"\n¬ведите конец промижутка b=";
    cin>>b;
    cout<<"\n¬ведите шаг увеличени€ h=";
    cin>>h;
    while(a<=b)
    {
               cout<<"\nx= "<<a;
               x=log(a-3)/(a*a+3*a-1);
               if((a*a+3*a-1)==0) cout<<"q";
               cout<<"\nln(x-3)/(x^2+3x-1)="<<x;
               a=a+h;
               }
               getch ();
               return 0;
               }
               
               
