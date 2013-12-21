#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int y,x,z=0;
y=45;
cout<<"What is your guess? ";cin>>x;
while (x!=y)
{
cout<<"\nTry again..What is your guess? ";cin>>x;z++;
  if (x<y)
  {
  cout<<"\nYour guess too low";
  }
  else if (x>y)
  {
  cout<<"\nYour guess too high";
  }
  else
  {
  cout<<"\nCongratulation! Your got it right";
  }
}
cout<<"\nit took you only "<<z<<" tries yo guess";
getch();
}
