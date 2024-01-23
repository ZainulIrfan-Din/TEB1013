#include <iostream>
#include <cctype>

using namespace std;

	double costBasicPackage (char dest, int adu, int chi) 
	{
 		double cost;
 
 		switch (toupper(dest))
 			{
 				case 'R': cost = adu * 600 + chi * 400; break;
 				case 'T': cost = adu * 700 + chi * 450; break;
 			}
 
 		cout << "Your basic package costs = RM" << cost << endl;
 	
 		return cost;	
	}

	void costAdditionals (double &cost)
	{
	 	char snorkel, hopping;
 		int people, sess;
 
		cout << "Do you want to go snorkeling? (Y/N): ";
 		cin >> snorkel;
 
 		if (toupper(snorkel) == 'Y')
			{
 				cout << "How many sessions? : ";
 				cin >> sess;
 				cout << "How many people? : ";
 				cin >> people;
 				
 				cost = cost + (sess * people * 200);
			}

		cout << endl;

 		cout <<"Do you want to go island hopping? (Y/N): ";
 		cin >> hopping;
 
 		if (toupper(hopping) == 'Y')
 			{
 				cout << "How many people? : ";
 				cin >> people;
 	
 				int boat = people / 4;
 	
 				if (people % 4 != 0)
 					{
						boat +=1;
 						cost = cost + (boat * 200);
					}	
			}
	}

int main() 
{	
	char dest;
	int chi, adu, cost;	
	double excost, total;

	cout << "Enter the destination (R/T): ";
	cin >> dest;

	cout << endl;

	cout << "Amount of children: ";
	cin >> chi;

	cout << endl;

	cout << "Amount of adult(s): ";
	cin >> adu;

	cout << endl;

	cost = costBasicPackage (dest, adu, chi);

	cout << endl;

	costAdditionals(excost);

	total = cost + excost;

	cout << endl;

	cout << "Total Price: RM" << total << endl;

	return 0;
}
