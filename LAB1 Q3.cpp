#include <iostream>
using namespace std;

int main()
{
	float t_amt, cost , profit ;
	int carton;
	
	cout << "\nPlease Enter the Total Amount of Milk :";
	cin >> t_amt;
	
	carton = t_amt / 3.78;
	cout<<"\nCarton:"<< carton << endl;
	
	cost = t_amt * 0.38;
	cout<<"\nCost: RM "<< cost << endl;
	
	profit = carton * 0.27;
	cout<<"\nProfit: RM "<<profit << endl;
	
	
	return 0;
	
}