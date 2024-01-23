#include <iostream>
using namespace std;
const int PRIME_NUM = 11;

int main()

{	const int SECRET = 17 ;
	int num,mysteryNum;
	
	cout << "\n Enter a positive integer less than 1000:";
	cin>>num;
	
	mysteryNum = num * PRIME_NUM - 3 * SECRET;
	 cout<<"Mystery Number :" << mysteryNum << endl;
	 
	 return 0;
	 
}