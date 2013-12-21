#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x,y=1,z=1;
cout<<"masukkan faktorial : ";cin>>x;
while (y<=x)
{
z=z*y;
y++;
}
cout<<z;
cout<<"\nTerima kasih anda telah menggunakan program ini";
getch();
}