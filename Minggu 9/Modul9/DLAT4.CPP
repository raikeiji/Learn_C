#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int x,bil[10], y, i;
	cout<<"Masukkan bilangan (maks 10) : ";
	cin>>x;
	for (i=1 ; i<=x ; i++)
	{
		cout<<"Masukkan bilangan "<<i<<" : ";
		cin>>bil[i-1];
	}
	int bsr;
	int kcl;

	for (i=1 ; i<=x ; i++)
	{
		if ( bsr==bil[i-1] || bsr>=bil[i-1] )
		bsr=bil[i-1];

		if ( kcl==bil[i-1] || kcl<=bil[i-1] )
		kcl=bil[i-1];
	}
	cout<<"\nBilangan Terbesar : "<<kcl;
	cout<<"\nBilangan Terkecil : "<<bsr;
	cout<<endl<<"\nTerimakasih";

	getch();
}
