#include <iostream.h>
#include<conio.h>
void main()
{
clrscr();
long sum = 0; /* The sum of the integers */
int i = 1; /* Indexes through the integers */
int count ; /* The count of integers to be summed */
/* Get the count of the number of integers to sum */
cout<<"\nEnter the number of integers you want to sum: ";
cin>>count;
/* Sum the integers from 1 to count */
while(i <= count){
sum += 1;
cout<<"Total of the first "<<count<<" numbers is "<<sum<<endl;
i++; }

getch();
}