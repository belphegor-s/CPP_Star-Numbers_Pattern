// C++ program – Pyramid Pattern Printing using numbers
#include <iostream>
using namespace std;

int main()
{
	int i, j,n;
	cout<<"Enter no. of rows: ";
	cin >> n;

	for(i = 1; i <= n; i++)
	{
		for(j = i; j <= n; j++)
			cout << j <<" ";
	
		cout << endl;
	}
	
	return 0;
}