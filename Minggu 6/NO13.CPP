#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long int angka,x;
cout<<"Masukkan angka= ";cin>>angka;
while (angka>0)
{
	if (angka<0)
	{
	cout<<angka;
	break;
	}
x=angka%10;
cout<<x;
angka=angka/10;
}
getch();
}
