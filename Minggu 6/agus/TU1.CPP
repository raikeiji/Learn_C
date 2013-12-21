#include<iostream.h>
int main (void)
{
   long sum=0;
   int i=1;
   int count=0;

   cout<<"\nEnter the number of integers you want to sum :";
   cin>>count;
   while(i<=count){
   sum+=1;
   cout<<"Total of the first "<<count<<"numbers is"<<sum <<endl;
   i++;
   }
   return 0;
}