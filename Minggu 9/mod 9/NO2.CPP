#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int a,b,c,bil[10];
char again;
cout<<"masukkan banyak bilangan (maksimal 10):";
cin>>a;
for (b=1;b<=a;b++)
{
cout<<"masukkan bilangan "<<b<<":";
cin>>bil[b-1];
}
do
{
cout<<"\nBilangan berapa yang anda cari?";
cin>>c;
  for (b=1;b<=a;b++)
  {
    if (bil[b-1]==c)
    {
    cout<<"bilangan "<<c<<" ada di posisi : "<<b;
    break;
    }
  }
  cout<<"\nmau coba lagi?(y/n)";
  cin>>again;
  if (again=='n'||again=='N')
  {
  cout<<"terima kasih";
  break;
  }
}
while (again=='y'||again=='Y');
getch();
}
