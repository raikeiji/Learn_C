#include<iostream.h>
#include<conio.h>
#include<math.h>
void main ()
{       clrscr();
	float a,b,c,d,sd,miu;
	cout<<"Masukan nilai 1 : " ;cin>>a;
	cout<<"\n";
	cout<<"Masukan Nilai 2 : ";cin>>b;
	cout<<"\n";
	cout<<"masukan Nilai 3 : ";cin>>c;
	cout<<"\n";
	cout<<"masukan Nilai 4 : ";cin>>d;
	cout<<"\n";
		miu = (a+b+c+d)/4;
		cout<<"rata-rata : "<<miu;
		sd=sqrt((pow(miu-a,2)+pow(miu-b,2)+pow(miu-c,2)+pow(miu-d,2))/4);
		cout<<"standard Deviasi =" <<sd;
		getch();

		}