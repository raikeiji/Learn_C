#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int i ,data[10],jum;
data [0]=1;
data [1]=1;
cout<<"masukan jumlah deret ";
cin>>jum;
for(i=2;i<=jum+2;i++)
{
data[i]=data[i-1]+data[i-2];
}
cout<<"deret adalah :";
for(int a=0;a<jum;a++)
{
cout<<data [a]<<" ";
}
getch();
}
