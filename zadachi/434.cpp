#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int m,i,n,k=0;
    float a[10],b[10];
    cout<<"enter 10 number in the line 1"<<endl;
    for(int i=0; i<10; i++)
    {
            m=rand()%1000;
            cout<<m<<"\n";
            a[i]=m;
            }
    float min=a[0],max=a[0];
    for(i=0; i<10; i++)
    {
             if(min>a[i])
             (min=a[i]);
    }
    {
             if(max<a[i])
             (max=a[i]);
             }
    cout<<"min "<<min<<" "<<"max "<<max<<endl;
    while(k<10)
    {
               if(a[k]==max)
               {a[k+1]=0.5;}
               {a[k+2]=0.5;}
               k++;
               }
    cout<<"enter 10 numbers in the line 2"<<endl;
    for(k=0; k<10; k++)
    {
             n=rand()%1000;
             cout<<n<<"\n";
             b[k]=n;
             }
    float min2=b[0],max2=b[0];
    for(i=0; i<10; i++)
    {
             if(min2>b[i])
             (min2=b[i]);
             if(max2<b[i])
             (max2=b[i]);
             }
             cout<<"min "<<min2<<"max "<<max2<<endl;
             k=0;
             while(k<10)
    {
             if(b[k]==max2)
             {b[k+1]=0.5;}
             if(b[k+1]==0.5)
             {b[k+2]=0.5;}
             k++;
             }
    cout<<"nomfpuf symbols for the line 1"<<endl;
    for(k=0; k<10; k++)
    {
             cout<<a[k]<<" ";
             }
    cout<<"\nnomfpuf symbols for the line 2"<<endl;
    for(k=0; k<10; k++)
    {
             cout<<b[k]<<" ";
             }
             getch();
             return 0;
             }
    
              
               
            
