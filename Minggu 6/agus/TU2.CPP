#include<iostream.h>
main()
{
    char ans;
    float r, area;
    while ((ans=='Y')||(ans=='y'))
    {   cout<<"\Input radius of circle : ";
	cin>>r;
	cout<<"Area of circle with radius : "<<r<<" is : "<<3.14*r*r<<endl;
	cout<<"Do you want to continue (Y/N) ?";
	cin>>ans;
    }
    return 0;
}