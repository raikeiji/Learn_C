#include <iostream.h>
int main()
{
	int total; // Running total of all numbers so far
	int item; // next item to add to the list
	total = 0;
	while (1){
		cout << "Enter # to add \n";
		cout << " or 0 to stop:";
		cin >> item;
		if (item == 0)
			break;
		total += item;
		cout << "Total: " << total << "\n";
	}
	cout << "Final total " << total << "\n";
	return (0);
}