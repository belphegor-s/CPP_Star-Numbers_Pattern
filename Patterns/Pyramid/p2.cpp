// C++ program to print inverted half pyramid pattern using stars
#include <iostream>
using namespace std;

int main()
{
	int i, j, n, k = 0;
	cout<<"Enter no. of rows: ";
	cin >> n;

	for(i = n; i >= 1; --i)
	{
		for(j = 1; j <= i; ++j)
		{
		cout <<"*";
		}
		cout <<'\n';
	}

	return 0;
}