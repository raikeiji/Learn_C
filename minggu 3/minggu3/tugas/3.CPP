#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int j_kerja,h_1,h_2,h_3,gol;
	cout<<"masukkan jam kerja: ";cin>>j_kerja;
	cout<<"masukkan golongan kerja: ";cin>>gol;
	if (gol==1)
	{
	h_1=(j_kerja*10000);
	cout<<"honor lembur pegawai: "<<h_1;
	}
	else if (gol==2)
	{
	h_2=(j_kerja*20000);
	cout<<"honor lembur pegawai: "<<h_2;
	}
	else if (gol==3)
	{
	h_3=(j_kerja*3000);
	cout<<"honor lembur pegawai: "<<h_3;
	}
	getch();
}


