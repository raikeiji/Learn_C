#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
     int a, b;
     for(a=1; a<=5; a++)
     {
	cout<<endl;
	for(b=5; b>=a; b-=1)
	{
	  cout<<"A";
	}
     }
     getch();
}
