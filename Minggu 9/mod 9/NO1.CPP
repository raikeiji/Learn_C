#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,x,bil[10];
    cout<<"Masukkan banyak bilangan ";
    cin>>x;
for (a=1;a<=x;a++)
{
    cout<<"Masukkan bilangan "<<a<<" :";
    cin>>bil[a-1];
}
    cout<<"Bilangan yang anda masukkan adalah:"<<endl;
for (a=1;a<=x;a++)
{
    cout<<"Bilangan " <<a<<":"<<bil[a-1]<<" "<<endl;
}
getch();
}
