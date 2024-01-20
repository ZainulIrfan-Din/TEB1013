#include <iostream>

using namespace std;

int main()
{
	int score;
	int pass = 40;
	int pctr = 0;
	int fctr = 0;
	int std;
	int ctr = 1;
	
	cout << "Please enter the scores and the program will display the stats" << endl;
	
	cout << " " << endl;
	
	cout << "Please enter how many students participated: ";
	cin >> std;
	
	cout << " " << endl;
	
	while (ctr <= std)
	{
		cout << "Enter score " << ctr << ": ";
		cin >> score;
		ctr++;
					
		if (pass <= score)
		{
			pctr++;
		}
		
		else if (score < pass)
		{
			fctr++;
		}
	}
	
	cout << " " << endl;
	
	cout << "The number of students: " << (ctr - 1) << endl;
	cout << "The number of students who pass: " << pctr << endl;
	cout << "The number of students who fail: " << fctr << endl;

	return 0;
}

