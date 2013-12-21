#include<iostream>
#include<conio.h>
using namespace std;

int bulat(int a) ;

int bulat(int a) //fungsi untuk menghitung
{
    if (a%2==0)
    {
    return 1;
    }
    else
    {
    return 0;
    }

  cout<<endl;
}
int main()   //fungsi main untuk memanggil
{
cout<<bulat(4)<<endl;
cout<<bulat(5)<<endl;
cout<<bulat(6)<<endl;
getch();
}

