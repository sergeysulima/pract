#include<conio.h>       
#include<iostream.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL, "rus");
    long double a,b,c,mpa,mpb,mpc;
    cout<<"������� ������� ������������\n"<<"a=";
    cin>>a;
    cout<<"\nb=";
    cin>>b;
    cout<<"\nc=";
    cin>>c;
    long double ma,mb,mc;
    ma=0.5*sqrt((2*pow(b,2))+(2*pow(c,2))-pow(a,2));
    cout<<"\n������� ����������� � ������� a="<<ma<<"\n";
    mb=0.5*sqrt((2*pow(a,2))+(2*pow(c,2))-pow(b,2));
    cout<<"\n������� ����������� � ������� b="<<mb<<"\n";
    mc=0.5*sqrt((2*pow(a,2))+(2*pow(b,2))-pow(c,2));
    cout<<"\n������� ����������� � ������� �="<<mc<<"\n";
    mpa=((ma/3)/2)*3;
    cout<<"\n������� ���������� ������������ ��������� � ������� a1="<<mpa;
    mpb=((mb/3)/2)*3;
    cout<<"\n������� ���������� ������������ ��������� � ������� b1="<<mpb;
    mpc=((mc/3)/2)*3;
    cout<<"\n������� ���������� ������������ ��������� � ������� �1="<<mpc;
    getch();
    return 0;
}

