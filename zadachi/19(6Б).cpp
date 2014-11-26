#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int i,j,N,b=0;
    cout<<"Vvedit poryadok matrici\n";
    cin>>N;
    cout<<"Vvedit matricu "<<N<<"*"<<N<<"\n";
    int a[N][N];
    for(i=0; i<N; i++)
    {
             for(j=0; j<N; j++)
             {
             cin>>a[i][j];
             }}
             printf("\n");
             for(b=0; b<N; b++)
     {
             for(i=0; i<N; i++)
     {
             j=0+b;
             {
                   if(a[i][j]==0)
             {
                   for(j=0; j<N; j++)
             {
                   cout<<a[i][j]<<" ";
             }
             cout<<"\n";
             }}}}
     getch();
     return 0;
     }                  
                              
