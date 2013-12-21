#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  char n_1[10],n_2[10];
  int u_1,u_2;
  cout<<"masukkan nama: ";cin>>n_1;
  cout<<"\nmasukkan umur: ";cin>>u_1;
  cout<<"\nmasukkan nama: ";cin>>n_2;
  cout<<"\nmasukkan umur: ";cin>>u_2;
  if(u_1>u_2)
  {
  cout<<n_1<<" lebih tua dari "<<n_2;
  }
  else if (u_2>u_1)
  {
  cout<<n_2<<" lebih tua dari "<<n_1;
  }
  getch();
}