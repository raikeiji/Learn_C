#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int hari;
cout<<"Menentukan nama hari\n";
cout<<"1 = Senin\n2 = Selasa\n3 = Rabu\n4 = Kamis\n";
cout<<"5 = Jum'at\n6 = Sabtu\n7 = Minggu\n";
cout<<"\nMasukan kode hari( 1-7) : ";
cin>>hari;
switch(hari)
{ case 1 : cout<<"Hari Senin"; /* kemungkinan pertama */
  break;
  case 2 : cout<<"Hari Selasa"; /* kemungkinan kedua */
  break;
  case 3 : cout<<"Hari Rabu"; /* kemungkinan ketiga */
  break;
  case 4 : cout<<"Hari Kamis"; /* kemungkinan keempat */
  break;
  case 5 : cout<<"Hari Jum'at"; /* kemungkinan kelima */
  break;
  case 6 : cout<<"Hari Sabtu"; /* kemungkinan keenam */
  break;
  case 7 : cout<<"Hari Minggu"; /* kemungkinan ketujuh */
  break;
  default : cout<<"Kode hari yang Anda masukan SALAH";
}
getch();
}