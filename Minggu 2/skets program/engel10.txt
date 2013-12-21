#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	float a,b,c,D,x,x1,x2;
	cout<< "\n Masukkan nilai a : ";
	cin>>a;
	cout<< "\n Masukkan nilai b : ";
	cin>>b;
	cout<< "\n Masukkan nilai c : ";
	cin>>c;
	if (a!=0)
	{
	  D=(b*b)-4*a*c;
	  if (D==0)
	  {
	     x= (-b+sqrt(D))/(2*a);
	     cout<< "\n Nilai x : "<<x;
	  }
	  else if (D>0)
	  {
	   x1=(-b+sqrt(D))/(2*a);
	   x2=(-b-sqrt(D))/(2*a);
	   cout<< "\n Jadi nilai x1 : "<<x1<< " dan nilai x2 : "<<x2<<endl;
	  }
	  else
	  {
	   cout<< "\n akar imajiner ";
	  }

	  }
	  else
	  cout<< "\n Bukan persamaan kuadrat ";


	  getch();
}

