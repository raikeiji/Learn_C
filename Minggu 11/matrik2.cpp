#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int matrix1[4][4];
int matrix2 [4][4];
int i,j;
int jumlah[4][4];

for(i=1;i<=3;i++)
{
    for(j=1;j<=3;j++)
    {
        cout<<"matrix 1 pada baris ke "<<i<<" kolom ke "<<j<<" : ";
        cin>>matrix1[i-1][j-1];
    }
    cout<<endl;
}
for(i=1;i<=3;i++)
{
    for(j=1;j<=3;j++)
    {
    cout<<matrix1[i-1][j-1]<<" ";
    }
    cout<<endl;
}
		for(i=1;i<=3;i++)
		{
            for(j=1;j<=3;j++)
            {
            cout<<"matrix 2 pada baris ke "<<i<<" kolom ke "<<j<<" : ";
            cin>>matrix2[i-1][j-1];
            }
            cout<<endl;
		}
        for(i=1;i<=3;i++)
		{
            for(j=1;j<=3;j++)
            {
            cout<<matrix1[i-1][j-1]<<" ";
            }
            cout<<endl;
		}
		cout<<"maka hasil dari penjumlahan kedua matriks ialah "<<endl;
				for(i=1;i<=3;i++)
				{
                    for(j=1;j<=3;j++)
                    {
                    jumlah[i-1][j-1]=matrix1[i-1][j-1]+matrix2[i-1][j-1];
                    cout<<jumlah[i-1][j-1]<<" ";
                    }
                    cout<<endl;
				}
				getch();
				}
