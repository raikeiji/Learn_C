#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y,z,u,a,b,c,d,e;
	cout<<"nilai x: ";cin>>x;
	cout<<"nilai y: ";cin>>y;
	cout<<"nilai z: ";cin>>z;
	cout<<"nilai u: ";cin>>u;
	a=x==u;
	b=x!=u;
	c=!(x>=u)&&(y!=z);
	d=(y==x)||(u>z);
	e=x+2<10&&y-2<5||u+4<z;
	cout<<"\nhasil a: "<<a;
	cout<<"\nhasil b: "<<b;
	cout<<"\nhasil c: "<<c;
	cout<<"\nhasil d: "<<d;
	cout<<"\nhasil e: "<<e;
	getch();
}