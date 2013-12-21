#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,sum=0;
for (a=1;a<6;a++)
{
  cout<<"Masukkan bilangan ke-"<<a<<":";
  cin>>b;
  if(b%2==0)
  {
  }
  else
  {
  sum=sum+b;
  }
}
cout<<"Jumalah total bilangan ganjil masukkan anda adalah : "<<sum;
getch();
}