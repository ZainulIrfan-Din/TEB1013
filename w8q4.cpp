#include <iostream>

using namespace std;

typedef struct
{
	char name[50];
	int id;
	float yr1;
	float yr2;
} expenditure;

typedef struct
{
	expenditure expend;
} expendi;

int main()
{
	expendi exp[8];
	float change, avg;
	
	expendi[1].expend.name = "E-Z-Drink™ Cola";
	expendi[1].expend.id = 1111;
	expendi[1].expend.yr1 = 60.7;
	expendi[1].expend.yr2 = 73.6;
	
	
	
	
	
	
	
	
	
	
	for(int i=1; i < 9; i++)
	{
		cout << exp[i].name << "\t\t" << exp[i].id << "\t\t" << exp[i].yr1 << "\t\t" << exp[i].yr2 << endl;
	}

	return 0;
}

