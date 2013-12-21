#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int x,y,z,u,a,b,c,d,e;
	cout<<"masukkan nilai x: ";cin>>x;
	cout<<"masukkan nilai y: ";cin>>y;
	cout<<"masukkan nilai z: ";cin>>z;
	cout<<"masukkan nilai u: ";cin>>u;
	a=(x==u);
	b=x!=u;
	c=!(x>=u)&&(y!=z);
	d=(y==x)||(u>z);
	e=x+2<10&&y-2<5||u+4<z;
	cout<<"tampilkan hasil a: "<<a;
	cout<<"\ntampilkan hasil b; "<<b;
	cout<<"\ntampilkan hasil c: "<<c;
	cout<<"\ntampilkan hasil d: "<<d;
	cout<<"\ntampilkan hasil e: "<<e;
	getch();
}
