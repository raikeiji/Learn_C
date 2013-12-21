#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
  clrscr();
  int a,b,c,d,nilai;
  cout<<setw(3) <<"x" <<"|";

  for(c=1; c<=5; c++)
  {
      cout<<setw(3) <<c <<" ";
  }
  cout<<endl;
  for(d=1; d<=5; d++)
  {
     cout<<setw(3) <<"-----";
  }
  cout<<endl;
  for(a=1; a<=5; a++)
  {
     cout<<setw(3) <<a <<"|";
     for(b=1; b<=5; b++)
     {
	nilai=b*a;
	cout<<setw(3) <<nilai <<" ";
     }
     cout<<endl;
  }

getch();
}