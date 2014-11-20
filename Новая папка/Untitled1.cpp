
#include <iostream.h>
#include <conio.h>


char init(char* a = "Sulima", char* b = "3", char* c = "PS3-1");
int main()
{
cout <<init()<<endl;
		cout <<init("Sulima","3","PS 3-1")<<endl;
		cout <<init("Sergey")<<endl;
		getch();
return 0;
        }
char init(char* a,char* b, char* c)
{
cout << "Surname : " << a << "\t" << "Curse : " << b << "\t"  << "Grypa : " << c << endl ;
}
