#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,x,bil[10]; int sum=0;
    cout<<"Masukkan jumlah data : ";
    cin>>x;
for (a=1;a<=x;a++)
{
    cout<<"Masukkan data orang ke-"<<a<<" : ";
    cin>>bil[a-1];
}
    cout<<"Pada akhir tahun: "<<endl;
for (a=1;a<=x;a++)
{
    float b;
    b=0.01;
    int c;
    for (c=11;c<x;c--)
    {
        sum=bil[a-1]+(bil[a-1]*b);
    }

    sum=sum+(sum*b);
    cout<<"Saldo orang ke-" <<a<<":"<<sum<<" "<<endl;
}
getch();
}
