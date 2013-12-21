#include <iostream.h> 
main() 
{ 
	char ans; 
	float r, area; 
	while ((ans == 'Y') || (ans == 'y')) 
	{	cout<<"\Input radius of circle : "; // Warn and ask
	cin>>r;
	cout<<"Area of circle with radius : "<<r<<" is : "<<3.14*r*r<<endl;
	cout<<"Do you want to continue (Y/N)?"; // again cin>>ans;
	} /* Body of while loop ends here */ 
	return 0; 
}