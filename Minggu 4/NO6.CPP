#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int tgl,bln,thn;
cout<<"masukkan tanggal: ";cin>>tgl;
cout<<"\nmasukkan bulan  : ";cin>>bln;
cout<<"\nmasukkan tahun  : ";cin>>thn;
cout<<"\nterjemahan dari data diatas ialah";
switch(bln)
{
case 1 : cout<<tgl<<" Jannuari "<<thn;break;
case 2 : cout<<tgl<<" Februari "<<thn;break;
case 3 : cout<<tgl<<" Maret "<<thn;break;
case 4 : cout<<tgl<<" April "<<thn;break;
case 5 : cout<<tgl<<" Mei "<<thn;break;
case 6 : cout<<tgl<<" Juni "<<thn;break;
case 7 : cout<<tgl<<" Juli "<<thn;break;
case 8 : cout<<tgl<<" Agustus "<<thn;break;
case 9 : cout<<tgl<<" September "<<thn;break;
case 10 : cout<<tgl<<" Oktober "<<thn;break;
case 11 : cout<<tgl<<" November "<<thn;break;
case 12 : cout<<tgl<<" Desember "<<thn;break;


default : cout<<"bulau yang anda masukkan tidak masuk akal"; }
getch();
}
