#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long int angka, x=0;
cout<<"Masukkan angka: ";
cin>>angka;
while (angka>0)
{
	x=x+1;
	angka=angka/10;
}
cout<<x;
getch();
}
