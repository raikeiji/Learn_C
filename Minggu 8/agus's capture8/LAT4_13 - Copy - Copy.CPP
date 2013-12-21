#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int N=4;
   for(int i=0; i<N; i++)
   for(int j=0; j<N; j++)
   if(i!=j)
   cout<<i <<"," <<j <<",";
getch();
}