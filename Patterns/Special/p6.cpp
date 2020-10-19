//Rhombus Pattern Program in C++
#include <iostream>
using namespace std;
int main()
{
	int i, j, n;
	cout<<"Enter no. of rows: ";
	cin >> n;

	// solid rhombus
	cout << "\n\nSolid Rhombus" << endl;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n - i; j++)
			cout << " ";  // leading spaces
		
		for(j = 0; j < n; j++)
			cout << "*";

		cout << "\n";
	}
	
	// hollow rhombus
	cout << "\n\nHollow Rhombus" << endl;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n - i; j++)
			cout << " ";  // leading spaces
		for(j = 0; j < n; j++)
		{
			// upper horizontal, bottom horizontal, left diagonal, right diagonal
			if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
				cout << "*";
			else
				cout << " "; 
		}
		cout << "\n";
	}
	
	return 0;
}