/bin/sh: 1: g++;
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int a,b,c=25,bil[10];
cout<<"masukkan banyak bilangan (maksimal 10) : ";
cin>>a;
for (b=1;b<=a;b++)
{
    cout<<"masukkan bilangan "<<b<<":";
    cin>>bil[b-1];
}

for (b=1;b<=a;b++)
{
  cout<<"bilangan yang lebih besar dari rata-rata (25) adalah";
  if (bil[b-1]>c)
  {
  cout<<bil[b-1]<<"(urutan "<<b<<")";
  }
}
  cout<<"terima kasih";
}
