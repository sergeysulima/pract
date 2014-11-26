#include<conio.h>       
#include<iostream.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL, "rus");
    long double a,b,c,mpa,mpb,mpc;
    cout<<"Введите стороны триугольника\n"<<"a=";
    cin>>a;
    cout<<"\nb=";
    cin>>b;
    cout<<"\nc=";
    cin>>c;
    long double ma,mb,mc;
    ma=0.5*sqrt((2*pow(b,2))+(2*pow(c,2))-pow(a,2));
    cout<<"\nМедиана проведенная к стороне a="<<ma<<"\n";
    mb=0.5*sqrt((2*pow(a,2))+(2*pow(c,2))-pow(b,2));
    cout<<"\nМедиана проведенная к стороне b="<<mb<<"\n";
    mc=0.5*sqrt((2*pow(a,2))+(2*pow(b,2))-pow(c,2));
    cout<<"\nМедиана проведенная к стороне с="<<mc<<"\n";
    mpa=((ma/3)/2)*3;
    cout<<"\nМедиана начального триугольника проведена к стороне a1="<<mpa;
    mpb=((mb/3)/2)*3;
    cout<<"\nМедиана начального триугольника проведена к стороне b1="<<mpb;
    mpc=((mc/3)/2)*3;
    cout<<"\nМедиана начального триугольника проведена к стороне с1="<<mpc;
    getch();
    return 0;
}

