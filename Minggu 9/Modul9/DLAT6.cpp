#include <iostream>
#include <conio.h>
using namespace std;

int main();
{
	int x, i, bil[1000];
	cout<<"Masukkan banyak bilangan : ";
	cin>>x;
	for (i=1 ; i<=x ; i++)
	{
		cout<<"Masukkan bilangan "<<i<<" : ";
		cin>>bil[i-1];
	}

	for (i=1 ; i<=x ; i++)
	{
		cout<<bil[i-1]<<" : ";
      for (int j=0 ; j<bil[i-1] ; j++)
      	cout<<"*";
         cout<<endl;
	}

	getch();
}
