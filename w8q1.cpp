#include <iostream>

using namespace std;

struct account
{
	char acc_no[7];
	char acc_type;
	char name[20];
	float balance;
}

int main()
{
	account acc[5];

	for(int i=1; i<6; i++)
	{
		cout << "Account number for student " << i << ": ";
		cin >> acc[i].acc_no;

		cout << "Account type (C/S): ";
		cin >> acc[i].acc_type;

		cout << "Student name: ";
		cin >> acc[i].name;

		cout << "Student's balance: ";
		cin >> acc[i].balance;

		cout << endl;
	}	

	cout << "Account No\t\t" << "Account type\t\t" << "Name\t\t" << "Balance\t\t";

	for(int i=1;i<6;i++)
	{
		cout << acc[i].acc_no << "\t\t\t" << acc[i].acc_type << "\t\t\t" << acc[i].name << "\t\t" << acc[i].balance << endl;
	}

	system("pause");

	return 0;
}
