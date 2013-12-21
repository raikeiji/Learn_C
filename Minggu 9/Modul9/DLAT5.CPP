#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

	int x,i , bil[1000];
	cout<<"Masukkan banyak bilangan : ";
	cin>>x;
	for (i=1 ; i<=x ; i++)
	{
		cout<<"Masukkan bilangan "<<i<<" : ";
		cin>>bil[i-1];
	}

	cout<<"\nBilangan yang anda masukkan adalah : \n";
	for (i=x ; i>=1 ; i--)
	{
		cout<<"Bilangan "<<i<<" : "<<bil[i-1]<<endl;
	}

	getch();
}
