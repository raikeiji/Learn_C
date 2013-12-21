#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int bil;
    cout<<"masukkan angka : ";
    cin>>bil;
     for(int baris=1; baris<=bil; baris++)
     {
	for(int kolom=1; kolom<=bil; kolom++)
	{
	   if(baris==1||baris==bil)
	   cout<<"*";

	   else
	   {
	    if(kolom==baris||kolom==bil-baris+1)
	    cout<<"*";
	    else
	    cout<<" ";
	    }
	}

	cout<<endl;
     }
		  getch();
  }
