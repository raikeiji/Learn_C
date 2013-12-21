#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int a,b,c=68;
    for(a=1; a<=4; a++)
    {
	cout<<"\n";
	for(b=65; b<=c; b++)
	{
	   cout<<(char)b;
	}
	c--;
    }
    getch();
}
