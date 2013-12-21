#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a=1,x,y,z;
cout<<"Berapa tinggi rumput sekarang? ";cin>>x;
cout<<"Berapa persen rumput akan bertambah setiap harinya? ";
cin>>y;
cout<<"Berapa tinggi rumput yang harus dipotong? ";cin>>z;
while (x<=z)
{
x=x+(y*z);a++;
}
cout<<"Butuh waktu "<<x<<"hari untuk memotong rumput";
getch();
}