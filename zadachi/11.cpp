#include<iostream>
#include<conio.h>
#include<fstream.h>
using namespace std;

int main()
{
    int i=0, str=0;
    string line[100];
    setlocale(LC_ALL,"rus");
    char buff[100];
    ifstream red;
    red.open("16chisla.doc");
    if(red==NULL)
    cout<<"Файл не может быть открытый:";
    else
    {
        int mas[100];
        while(red.good())
    {
        getline(red,line[i]);
        cout<<line[i]<<endl;
        i++;
        }
        for(int b=0; b<i; b++)
        {
                for(int j=b+1; j<i; j++)
                {
                        if(line[j]<line[b])swap(line[b],line[j]);
                        
                        }
                }
        }
        cout<<"\n";
        for(int b=0; b<i; b++)
        {
                cout<<line[b]<<" ";}
                getch();
                return 0;
                }
                      
