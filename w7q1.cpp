#include <iostream>

using namespace std;

int main()
{
	int i;
	int age[5] = {24,29,18,23,12};
	float marks[5] = {0.0};
	char grade[5];

	for (int i=0; i < 5; i++)
	{
		grade[i] = 'C';
	}

	cout << grade;

	return 0;
}

