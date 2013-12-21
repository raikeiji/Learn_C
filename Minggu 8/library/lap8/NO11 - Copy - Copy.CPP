#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,sum=0;
cout<<"Masukkan bilangan genap awal : ";cin>>a;
for (b=a;(b>=0&&b<=6);b+=2)
{
b=a;
cout<<b<<"+";
sum=sum+b;
cout<<"= "<<sum;
}
getch();
}