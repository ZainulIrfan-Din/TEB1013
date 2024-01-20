#include <iostream>

using namespace std;

int main()
{
	float ly,wy,lh,wh,tr,sh,sy,size;
	cout.precision(3);
	
	cout << "PLease enter the length of the yard: ";
	cin >> ly;
	cout << "Please enter the width of the yard: ";
	cin >> wy;
	
	sy = (ly * wy);
	
	cout << "The size of the yard is " << sy << endl;
	
	cout << " " << endl;
	
	cout << "Please enter the length of the house: ";
	cin >> lh;
	cout << "Please enter the width of the house: ";
	cin >> wh;
	
	sh = (lh * wh);
	
	cout << "The size of the house is " << sh << endl;
	
	cout << " " << endl;
	
	size = (sy - sh);
	tr = (size / 2);
		
	cout << "The time required to cut the grass is " << tr << "s";

 	return 0;
}

