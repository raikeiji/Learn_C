#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int c, d, nilai;
    for(c=1; c<=10; c++)
    {
      for(d=1; d<=5; d++)
      {
	 nilai=c*d;
	 cout<<nilai <<" ";
      }
    }
    getch();
 }