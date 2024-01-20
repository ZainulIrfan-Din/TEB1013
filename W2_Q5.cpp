#include <iostream>

using namespace std;

int main() 
{
	int ctr = 1;
	int num = 0;
	int pass = 40;
	int pctr = 0;
	
	cout << "Please enter 38 students score" << endl;
	cout << " " << endl;
		
	while (ctr <= 38)
	{
		cout << "Enter score " << ctr << ": ";
		cin >> num;
		ctr++;
		
		if (pass <= num)
		{
			pctr++;
		}
	}
	
	cout << " " << endl;
	cout << "The number of students who pass the test are " << pctr;
	
	
	
	
	
	return 0;
}
