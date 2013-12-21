#include<iostream>
#include<conio.h>
using namespace std;

int pangkat(int a, int b) ;

int pangkat(int a, int b) //fungsi untuk menghitung
{
  int hasil=1;
  for(int x=0;x<b;x++)
  {
  hasil=hasil*a;
  }
  cout<<hasil;
  cout<<endl;
}
int main()   //fungsi main untuk memanggil
{
pangkat(2,4);
pangkat(2,5);
getch();
}

