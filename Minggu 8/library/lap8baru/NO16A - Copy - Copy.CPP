#include<iostream.h>
#include<conio.h>
void main()
{
  int bil;
  clrscr();
  cout<<"masukkan angka :";
  cin>>bil;

  int kiri=1;
  int kanan=bil;

  for (int i=1; i<=bil; i++)
  {
    if (i==1||i==bil)
    {
      for (int j=1;j<=bil; j++)
      {
      cout<<"*";
      }
      cout<<"\n";
    }
    else
    {
    kiri++;
    kanan--;
    for (int i=1;i<=bil;i++)
    {
      if (i==kiri||i==kanan)
      {
      cout<<"*";
      }
      else
      {
      cout<<" ";
      }
    }
    cout<<"\n";
    }
  }
getch();
}