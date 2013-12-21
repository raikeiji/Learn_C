#include <conio.h>
#include <iostream.h>
void main (void)
{
	clrscr();
	int i, suhu [7];
	float rerata, jml;
	cout<<"Program mencatat suhu udara harian\n";
	cout<<"Masukkan data-data suhu udara dalam sepekan! \n";
	//input data
	for (i=1 ; i<=7 ; i++)
	{
		cout<<"Suhu hari ke-"<<i<<" = ";
		cin>>suhu[i-1];
	}
	//menjalankan elemen array
	jml=0;
	for(i=0 ; i<=6 ; i++)
	{
		jml=jml+suhu[i];
	}
	//mengitung suhu rata-rata
	rerata=jml/7;
	//menampilkan kembali data yang telah dicatat dan rata-ratanya
	cout<<"\nData-data suhu yang telah dicatat adalah:\n";
	for (i=0 ; i<=6 ; i++)
		cout<<suhu[i]<<endl;
	cout<<"\nRata-rata dalam sepekan = "<<rerata<<endl;
	getch();
}