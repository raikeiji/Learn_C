#include<iostream.h>
#include<conio.h>
int main ()
{
  int total;
  int item;
  int minus_items;

  total=0;
  minus_items=0;
  while (1)
  {
     cout<<"Enter # to add\n";
     cout<<"or 0 to stop : ";
     cin>>item;
     if(item==0)
	break;
     if (item<0)
     {
	++minus_items;
	continue;
     }
     total+=item;
     cout<<"Total : " <<total <<"\n";
  }
  cout<<"Final total " <<total <<"\n";
  cout<<"with" <<minus_item <<"negative items omitted\n";
  getch();
  return(0);
}