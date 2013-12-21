#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int x,y;
  cout<<"masukkan titik koordinat x: ";cin>>x;
  cout<<"masukkan titil koordinat y: ";cin>>y;
  if (x>0)
  {
    if (y>0)
    {
    cout<<"titik koordiat("<<x<<","<<y<<") berada pada kuadran pertama";
    }
  }
  else if (x<0)
  {
    if (y>0)
    {
    cout<<"titik koordiat("<<x<<","<<y<<") berada pada kuadran kedua";
    }
  }
  else if (x<0)
  {
    if (y<0)
    {
    cout<<"titik koordiat("<<x<<","<<y<<") berada pada kuadran ketiga";
    }
  }
  else if (x>0)
  {
    if (y<0)
    {
    cout<<"titik koordiat("<<x<<","<<y<<") berada pada kuadran keempat";
    }
  }
  getch();
}
