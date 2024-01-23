#include <iostream>

using namespace std;

int main()
{	
	float math[5];
	float eng[5];
	float draw[5];
	float avg,total;
	int i,j;

	for(int i = 0; i < 5; i++)
	{
		cout << "Maths' mark for student " << i+1 << ": ";
		cin >> math[i];

		cout << "English's mark for student " << i+1 << ": ";
		cin >> eng[i];

		cout << "Drawing's mark for student " << i+1 << ": ";
		cin >> draw[i];

		cout << endl;
	}

	cout << "The total marks and average marks for all students:" << endl << endl;

	for (int j = 0; j < 5; j++)
	{
		total = (math[j]) + (eng[j]) + (draw[j]);
		avg = (total / 3);

	cout << "The total marks for student " << j + 1 << ": " << total << endl;
	cout << "The average marks for student " << j + 1 << ": " << avg << endl;

	cout << endl;
	}

	return 0;
}
