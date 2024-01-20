#include <iostream>

using namespace std;

typedef struct
{
	int ID;
	char name[50];
	float rate;
	int hours;
	float gross;
} employee;

int main()
{
	employee emp[6];
	int i;
	float total;

	for(i=1; i < 3; i++)
	{
		cout << "Employee's ID: ";
		cin >> emp[i].ID;

		cout << "Employee's name: ";
		cin >> emp[i].name;

		cout << "Rate: ";
		cin >> emp[i].rate;

		cout << "Hours worked: ";
		cin >> emp[i].hours;

		cout << endl;
	}



	cout << "Employee's ID\t" << "Employee's name\t" << "Rate\t" << "Gross Pay\t" << endl;

	for(i=1; i < 3; i++)
	{
		emp[i].gross = (emp[i].hours * emp[i].rate);
		total = total + emp[i].gross;

		cout << emp[i].ID << "\t\t" << emp[i].name << "\t\t" << emp[i].rate << "\t\t" << emp[i].gross << endl;
	}

	cout << endl;

	cout << "Total Gross Pay: " << total << endl;

	system("Pause");

	return 0;
}
