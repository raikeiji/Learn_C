#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int bil,b;
cout<<"Masukkan bilangan keinginan anda: ";
cin>>bil;
for (int a=1;a<=bil;a++)
{
    for (b=1;b<=a;b++)
    {
        cout<<"^^ ";
    }
    cout<<"\n";
}
getch();
}
