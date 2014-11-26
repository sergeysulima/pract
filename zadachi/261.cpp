#include <conio.h>
#include <iostream.h>
#include <ctype.h>

int max(int a, int b){
    if(a>b) return a;
    else return b;}

int main()
{
    int r=0;
    int countSpace=0, countTemp=0,n;
    char c[1024];
    cout<<"Vvedite stroku\n";
    cin.getline(c,1024);
    
    cout<<"String is:\""<<c<<"\"\n";
    n=strlen(c);
    
    for (int i=0; i<n; i++)
    {
        if(c[i]==' ')
        {
                   
                   
                 
                   countSpace++;
                   }
                   if(c[i]=='e')
                   {r++;}
                   }
                   if(r>=5)
                   cout<<"count five 'e'="<<'+'<<endl;
                   else
                   cout<<"countSpace="<<countSpace<<endl;
        getch();
        return 0;
                   }
