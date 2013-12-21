#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
  clrscr();
  long int hrg_1,hrg_2,total;
  hrg_1=120000;hrg_2=500000;
  int lama;
  char kelas;
  cout<<"lama menginap: ";cin>>lama;
  cout<<"apakah berada di suite room ?: ";cin>>kelas;
  if(kelas=='Y'||kelas=='y')
  {
  total=lama*hrg_2;
  cout<<"harga yang harus dibayar: "<<total;
  }
  else
  {
  total=lama*hrg_1;
  cout<<"harga yang harus dibayar: "<<total;
  }
  getch();
}