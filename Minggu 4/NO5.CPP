#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
cout<<"masukkan nilai: ";cin>>n;
cout<<"loading...\n";
if (n>=0)
{
  if (n<=40)
  {
  cout<<"nilai "<<n<<"merupakan nilai E";
  }
}
else if (n>40)
{
  if (n<57)
  {
  cout<<"nilai "<<n<<"merupakan nilai D";
  }
}
else if (n>56)
{
  if (n<71)
  {
  cout<<"nilai "<<n<<"merupakan nilai C";
  }
}
else if (n>70)
{
  if (n<86)
  {
  cout<<"nilai "<<n<<"merupakan nilai B";
  }
}
else if (n>85)
{
  cout<<"nilai "<<n<<"merupakan nilai D";
}
getch();
}

