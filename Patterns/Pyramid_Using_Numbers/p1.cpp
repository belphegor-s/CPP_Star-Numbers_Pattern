// C++ program – Half Pyramid Pattern Printing using numbers
#include <iostream>
using namespace std;

int main()
{
	int i, j,n;
	
	cout<<"Enter no. of rows: ";
	cin >> n;

	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i; j++)
		   cout << j <<" ";
		
		cout << endl;
	}
	return 0;
}