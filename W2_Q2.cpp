#include <iostream>

using namespace std;

int main() 
{
	float x,y,z,sum,avg;
	cout.precision(3);
		
	cout << "Please enter three numbers " << endl;
	cin >> x >> y >> z;
	
	sum = x + y + z;
	avg = sum / 3;
	
	cout << "The sum of all numbers are " << sum << endl;
	cout << "The average of all numbers are " << avg << endl;
	
	return 0;
}
