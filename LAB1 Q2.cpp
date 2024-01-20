#include <iostream>
#include <iomanip>

using namespace std;


int main()
{ 	
	float ori, mup, tax;
	float sell,tam,total;
	cout.precision(3);
	//std::cout << std::setprecision(2) << std::fixed;
	
	cout << "Please Enter the Original Price: RM";
	cin >> ori;
	
	cout << "Please Enter the Percentage of Mark-up Price: ";
	cin >> mup;
	
	cout << "Please Enter the Sales Tax Rate: ";
	cin >> tax;
	
	cout << " " << endl;
	
	sell = ori + (ori * mup);
	cout << "Store Selling Price: RM" << sell << endl;
	
	tam = sell * tax;
	cout << "Sales Tax Amount: RM" << tam << endl;
	
	total = sell + tam ;
	cout << "Final Price: RM" << total << endl;
	
	
	return 0;
}
