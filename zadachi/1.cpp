/*Дано рядок . Підрахувати , скільки символів зустрічається
в ньому . Вивести їх на екран .*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{ 
const int n=20;
setlocale(LC_ALL,"");
char strok[n];
char temp[n]="";
int y=0;
cout<<"Ввести символы "<<endl;
gets(strok);
for(int i = 0; i < strlen(strok); i++) 
{
bool f=false; 
for(int h=0; h<y; h++)
{
if(strok[i] == temp[h]) f=true;
};
if (f==false)
{
temp[y]=strok[i];
y++;
};
};

cout<<endl;
cout<<temp<<endl;
cout<<"Количество символов = "<<y<<endl;
_getch();
}
