//Left and Right Arrows
#include <iostream>
using namespace std;
int main()
{
	int i, j, n;
	cout<<"Enter an odd number : ";
	cin >> n;  // ‘n’ must be odd...(Here n is the height and width of pattern to be printed)
	int num1 = n / 2 * 3;

	// right arrow
	cout << "\n\nRight Arrow" << endl;

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			// center horizontal, upper right diagonal, bottom right diagonal
			if(i == n / 2 || j - i == n / 2 || i + j == num1)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}

	// left arrow
	cout << "\n\nLeft Arrow" << endl;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			// center horizontal, bottom left diagonal, upper left diagonal
			if(i == n / 2 || i - j == n / 2 || i + j == n / 2)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
	return 0;
}