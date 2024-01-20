#include <iostream>

using namespace std;

double largerNumber(int num1, int num2)
{
	double ans;

	if (num1 > num2)
		ans = num1;
	if (num2 > num1)
		ans = num2;

	return ans;
}

double sumNumbers(int num1, int num2)
{
	double total;

	total = num1 + num2;

	return total;
}

double printMultiplies(int num1, int num2)
{
	double time, final;

	cout << "Enter no of times to multiply the two numbers: ";
	cin >> time;

	final = num1 * num2 * time;

	return final;
}

int main() 
{
	 int num1;
	 int num2;
	 int total, final;
	 int ans;
 
	 cout << "Enter num1 : ";
	 cin >> num1;
	 
	 cout << "Enter num2 : ";
	 cin >> num2;
 
	 cout << endl;
 
	 ans = largerNumber(num1, num2);
 
	 cout << ans << " is the larger number between " << num1 << " and " << num2 << endl;
 
	 cout << endl;
 
	 total = sumNumbers(num1, num2);
 
	 cout << num1 << " + " << num2 << " = " << total << endl;
 
	 cout << endl;
 
	 final = printMultiplies (num1, num2);
	 cout << "The result is: " << final << endl;
 
	 return 0;
}
