#include<iostream>
#include<cmath> //declare cmath library

using namespace std;

int main()
{	
	float negno, posno;
	float ans1, ans2, base;
	int exponent;

	cout << "Enter a negative floating number: ";
	cin >> negno;
	
	ans1 = fabs(negno); //fabs returns +ve value

	cout << "fabs ( << negno << ) = " << ans1 << endl;
	cout << "floor ( << negno << ) = " << floor(negno) << endl;

	cout << "Enter a positive floating number: ";
	cin >> posno;

	cout << "sqrt ( << posno << ) = " << sqrt(posno) << endl;

	base = sqrt(posno);

	cout << "Enter exponent value: ";
	cin >> exponent;

	ans2 = pow(base, exponent);

	cout << ans2 << endl;

	return 0;
}
