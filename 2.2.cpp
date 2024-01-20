#include<iomanip>			//for setprecision
#include<iostream>
#include<cmath>				//for calculation

using namespace std;

float check(float a, float b, float c, float d, float &e, float &f)
{
	if (a > b)
	{
		a = b;
		e = c;
		f = d;
	}
	
	return a;
}

void calc(float &a, float b, float &c, float d, float &z, float i)					//function for calculate price (using pythagoras method)
{
	z = sqrt(pow(a, 2) + pow(c, 2));
	a = z;
	c -= i;
	z = (a * b) + (i * d);
}

int main()
{														//to check total price lower or not
	float land_cost=0, wat_cost=0, width=0, facto=0, lowest=3.40282e+038, ans, i, j, lowest_land, lowest_wat;   //declaration
	const float conv = 5280;
	
	cout << fixed << setprecision(2);		//set two point decimal
	
	cout << "ORAL ASSESSMENT 2.2 (FUNCTION)" << endl << endl;
	
	cout << "The width of the river (in miles) = ";
	cin >> width;
	
	cout << "The distance of the factory downstream on the other side of the river (in miles) = ";
	cin >> facto;
	
	cout << "cost of laying the power line under water (per foot) = RM ";
	cin >> land_cost;
	
	land_cost *= conv;   //calc cost under water per foot
	
	cout << "cost of laying the power line over land (per foot) = RM ";
	cin >> wat_cost;
	
	wat_cost *= conv;		//calc cost over land per foot
	
	i = 0;
	
	do
	{
		calc(width, wat_cost, facto, land_cost, ans, i);							//calculating price while in distance
		
		lowest = check(lowest, ans, i, width, lowest_land, lowest_wat);				//checking if price is lower or not
		
		if(i == 0)
		
		i = 0.01;																	//increment when the overland length is now 0
		
	}while(i <= facto);
	
	system("cls");				//clearing screen
	
	cout << "ORAL ASSESSMENT 2.2 (FUNCTION)" << endl << endl;
	cout << "Length that should run over land = " << lowest_land << " miles.";
	cout << "Length that should run under water = " << lowest_wat << " miles.";
	cout << "Total cost for the operation = RM" << lowest;

	return 0;
}
