#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x,a,c,saldo,bil[20];
cout<<"masukkan jumlah data : ";
cin>>x;
for (a=0;a<x;a++)
{
  cout<<"masukkan data orang ke-"<<a+1<<":";
  cin>>bil[a];
}
cout<<"Pada akhir tahun"<<"\n";
int b=0.01;
for (a=0;a<x;a++)
{
  for (c=0;c<12;c++)
  {
  saldo=bil[a]+(bil[a]-(bil[a]*b));
  cout<<"saldo orang ke-"<<a+1<<":"<<saldo<<endl;
  }
}

getch();
}