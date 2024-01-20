#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	string name;
	int u,tax;
	float amount,total,at,atp;
	
	std::cout << std::setprecision(2) << std::fixed;
			
	cout << "Please enter your name: ";
	cin >> name;
	
	cout << " " << endl;
	
	cout << "Enter the purchase amount: RM";
	cin >> amount;
	
	cout << " " << endl;
	
	cout << "Choices" << endl;
	cout << "0 - tax exempt (0%)" << endl;
	cout << "1 - state sales tax only (3%)" << endl;
	cout << "2 - federal and state sales tax (5%)" << endl;
	cout << "3 - special sales tax (7%)" << endl;
	
	cout << " " << endl;
	
	cout << "Choose the tax code: ";
	cin >> u;
	
	switch (u)
	{
	case (0):
		total = amount;
		tax = 0;
		break;
		
	case (1):
		at = amount * 0.03;
		atp = at + amount;
		total = atp;
		tax = 3;
		break;
		 
	case (2):
		at = amount * 0.05;
		atp = at + amount;
		total = atp;
		tax = 5;
		break;
	
	case (3):
		at = amount * 0.07;
		atp = at + amount;
		total = atp;
		tax = 7;
		break;
	
	default:
		cout << "Invalid Input";
	}
	
	cout << " " << endl;
	
	cout << "Name: " << name << endl;
	cout<< "Purchase amount: RM" << amount << endl;
	cout << "Sales tax: " << tax << "%" << endl;
	cout << "Total amount due: RM" << total << endl;	
		
	return 0;
}
