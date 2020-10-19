/* C++ program for diamond pattern printing using numbers */

#include <iostream>
using namespace std;

int main()
{

	int i,j,s,N,count=0;

	cout<<"Enter two values : ";
	cin >> s >> N;

	for(i=s;count<4;count++)
	{

		for(j=0;j<count+1;j++)
			cout << i;

			cout << endl;

		i+=1;
	}

	for(i=s+N-2;count>0;count--)
	{

		for(j=0;j<count-1;j++)
			cout << i;
			cout << endl;
	
		i-=1;
	}

	return 0;
}