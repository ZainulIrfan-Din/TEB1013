#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() 
{
	char u;
	float x, due;
	string v;
	
	cout << setprecision(2) << fixed;
		
	cout << "C - CAR" << endl;
	cout << "B - BUS" << endl;
	cout << "T - TRUCK" << endl;
	
	cout << " " << endl;
	
	cout << "Please enter your type of vehicle: ";
	cin >> u;
	
	cout << " " << endl;
	
	cout << "How long does your vehicle spent in the parking lot: ";
	cin >> x;
	
	switch (u)
	{
		case 'c': case 'C':
			due = (x * 2);
			v = "car";
			break;
		
		case 'b': case 'B':
			due = (x * 3);
			v = "bus";
			break;
		
		case 't': case 'T':
			due = (x * 5);
			v = "truck";
			break;
	}
	
	cout << " " << endl;
	
	cout << "Your parking charge for your " << v << " is RM " << due << endl;
	
	return 0;
}
