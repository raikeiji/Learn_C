/* Program mencetak deret bilangan dengan menggunakan while */
#include<stdio.h>
#include<conio.h>
void main()
{ clrscr();
int i=1,x;
while(i<=3)
{
x=1;
while(x<=i)
{
cout<<x;
x=x+1;
}
cout<<"\n";
i=i+1;
}
getch();
}