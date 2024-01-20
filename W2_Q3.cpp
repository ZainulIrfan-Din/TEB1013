#include <iostream>

using namespace std;

int main() 
{
	float x,y,sum,diff,prod;
	
	cout << "Please enter two numbers " << endl;
	cin >> x >> y;
	
	sum = x + y;
	diff = x - y;
	prod = x * y;
	
	cout << "The sum of both numbers are " << sum << endl;
	cout << "The difference of both numbers are " << diff << endl;
	cout << "The product of both numbers are " << prod;
	
	return 0;
}
