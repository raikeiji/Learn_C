#include <iostream.h>
#include <conio.h>
void main (void)
{
	clrscr();
	int x,bil[10], y;
	char again;
	cout<<"Masukkan bilangan (maks 10) : ";
	cin>>x;
	for (int i=1 ; i<=x ; i++)
	{
		cout<<"Masukkan bilangan "<<i<<" : ";
		cin>>bil[i-1];
	}

	do
	{
		cout<<"\nBilangan berapa yang anda cari? ";
			cin>>y;


			for (int i=0 ; i<=x ; i++)
			{
				if(bil[i-1]==y)
				{
					cout<<"Bilangan "<<y<<" ada di posisi : "<<i;
				}
				
				else if(bil[i-1]!=y)
            {
			  		cout<<"bilangan "<<y<<" tidak ada";
               break;
            }
         }

			cout<<"\nMau coba lagi? (y/n) ";
			cin>>again;
			if (again=='n'||again=='N')
				cout<<"Terimakasih";
	}
	while (again=='y'||again=='Y');

	getch();
}