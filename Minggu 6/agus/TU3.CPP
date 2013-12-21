#include<iostream.h>
#include<conio.h>
int main()
{
   int old_number;
   int current_number;
   int next_number;
   old_number=1;
   current_number=1;
   cout<<"1\n";
   while (current_number<100)
   {
     cout<<current_number <<"\n";
     next_number=current_number+old_number;
     old_number=current_number;
     current_number=next_number;
   }
   getch();
}