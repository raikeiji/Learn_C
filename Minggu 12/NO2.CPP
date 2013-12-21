#include<iostream>
#include<conio.h>
using namespace std;

int bintang(int a) ;
int bintang(int a) //fungsi untuk menghitung
{
  for(int b=0;b<a;b++)
  {
  cout<<"* ";
  }
  cout<<endl;
}
int main()   //fungsi main untuk memanggil
{
bintang(1);
bintang(2);
bintang(3);
bintang(4);
bintang(5);
bintang(6);
bintang(7);
bintang(8);
bintang(9);
bintang(10);
getch();
}

