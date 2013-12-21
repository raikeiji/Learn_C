#include<iostream.h>
#incldue<conio.h>
void main()

{
clrscr();
int tahun[3]={2005,2006,2007};
int two_dim[3][12];
int i, j,jumlah;
for (i=0; i<3; i++)
{
cout<<"\nMasukkan data tahun "<<tahun[i];
for (j=0; j<12; j++)
{
cout<<\nBulan ke "<<j+1;
cin>>two_dim[i][j];
}
3
}
jumlah=0;
for (i=0;i<3; i++)
{
for(j=0;j<12;j++)
{
jumlah=jumlah+two_dim[i][j];
}
cout<<”Pendapatan tahun "<<tahun[i]<<” adalah : ”<<jumlah;
}
getch();
}