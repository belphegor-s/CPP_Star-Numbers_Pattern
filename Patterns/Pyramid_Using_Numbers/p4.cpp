/* C++ program print hollow half pyramid pattern using numbers */
#include <iostream>
using namespace std;

int main()
{
	int i, j, n, k = 0;

	cout<<"Enter no. of rows: ";
	cin >> n;
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i; j++)
		{
			if (j == 1 || j == i || i == n)
				cout << j;
			else
				cout <<" ";
		}
		cout<<endl;
	}
	return 0;
}