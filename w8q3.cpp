#include <iostream>

using namespace std;

typedef struct
{
	char name[50];
	float earning;
	float price;
} STOCK;

int main()
{
	STOCK sto[5];
	float s_price;

	for(int i=1; i < 6; i++)
	{
		cout << "The name of the stock: ";
		cin >> sto[i].name;

		cout << "Estimated earnings per share: ";
		cin >> sto[i].earning;

		cout << "Estimated price-to-earnings ratio: ";
		cin >> sto[i].price;

		cout << endl;
	}

	for(int i=1; i < 6; i++)
	{
		s_price = (sto[i].earning * sto[i].price);

		cout << "The anticipated stock price for stock " << sto[i].name << ": " << s_price << endl;
	}	

	system("Pause");

	return 0;
}
