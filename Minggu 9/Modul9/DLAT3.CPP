#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int x,bil[10], y, sum=0, average, i;
	cout<<"Masukkan bilangan (maks 10) : ";
	cin>>x;
	for ( i=1 ; i<=x ; i++)
	{
		cout<<"Masukkan bilangan "<<i<<" : ";
		cin>>bil[i-1];
	}
	for (i=1 ; i<=x ; i++)
	{
		sum=sum+bil[i-1];
		average=sum/x;
	}
    cout<<"\nBilangan yang lebih besar dari rata-rata ("<<average<<") adalah : ";

	for (i=1 ; i<=x ; i++)
	{
		if(bil[i-1]>average)
		{
		    cout<<endl<<bil[i-1]<<" (urutan "<<i<<")";
		}

	}
	getch();
}


