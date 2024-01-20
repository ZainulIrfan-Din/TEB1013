#include <iostream>

using namespace std;

int main() 
{
	int ctr = 1;
	int num = 0;
	int max = 0;
	
	cout << "Please enter 38 students score " << endl;
	cout << " " << endl;
		
	while (ctr <= 38)
	{
		cout << "Enter score " << ctr << ": ";
		cin >> num;
		ctr++;
		
		if (max < num)
		{
			max = num;
		}
	}
	
	cout << "The highest score is " << max;
	
	
	
	return 0;
}
