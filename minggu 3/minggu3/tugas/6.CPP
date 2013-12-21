#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int d_1,d_2,h_1,h_2;
	cout<<"masukkan data pertama: ";cin>>d_1;
	cout<<"masukkan data kedua: ";cin>>d_2;
	if (d_1>d_2)
	{
	h_1=(d_1-d_2);
	cout<<"hasilnya adalah "<<h_1;
	}
	else if (d_2>d_1)
	{
	h_2=(d_2-d_1);
	cout<<"hasilnya adalah "<<h_2;
	}
	getch();
}