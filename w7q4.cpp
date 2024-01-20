#include <iostream>

using namespace std;

int main()
{	
	int array[5][5];

	for (int i = 0; i < 5; i++) //process and calculations
	{
		for(int j = 0; j < 5; j++)
		{
			if (( j % 2 ) == 0)
				array[i][j] = 1;
			else
				array[i][j] = 0;
		}
	}

	for (int i = 0; i < 5; i++) //for display the array values
	{
		for(int j = 0; j < 5; j++)
		{
			cout << array[i][j] << "\t";
		}

	cout << endl;
	}

	return 0;
}	
