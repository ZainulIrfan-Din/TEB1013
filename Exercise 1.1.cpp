#include <iostream>
#include <cmath> //for ceil

using namespace std;

int main ()
{	//declaration
	float area, coverage, p_litre, price;
	int size, p_bucket,bucket;
	char quality;
	
	//question
	cout << "QUESTION 1.1\nA hardware shop wants a software to assist their customers while buying the paint. Write a program that helps the customer. The paint shop has different paint quality, price, coverage area and bucket size. \n\n";
	
	//option
	cout << "Listed down below are the quality of each paint offered." << endl;
	cout << "Quality" << "		Coverage" << "	5 Litres" << "	10 Litres" << "	25 Litres" << endl;
	cout << "A" << "		6 SqF/Litre" << "	RM5.00" << "		RM8.00" << "		RM10.00" << endl;
	cout<< "B" << "		5 SqF/Litre" << "	RM9.00" << "		RM15.00" << "		RM18.00" << endl;
	cout << "C" << "		4.5 SqF/Litre" << "	RM23.00" << "		RM38.00" << "		RM48.00" << endl;
	cout << endl;
	
	//input

	do //loop for repeating the prompt until user input +ve
	{
	cout << "Please enter your wall area (square feet): ";
	cin >> area;
		
		if (area <= 0) //to avoid -ve input
			{
				cout << endl; //gap between lines
				cout << "Error! Input must be more than 0" << endl; //invalid input
				cout << endl;
			}
	}
	while (area <= 0);
	
	cout << "Please enter your quality of paint: ";
	cin >> quality;
	
	do
	{
	cout << "Please enter your bucket size (5l/10l/25l): ";
	cin >> size;
	
		if (area <= 0)
			{
				cout << endl;
				cout << "Error! Input must be either 5, 10 or 25" << endl; //to avoid -ve input by user
				cout << endl;
			}
	}
	while (size <= 0);
	
	cout << endl;
	
	//case and process
	switch (quality)
	{
		case 'A': case 'a':
		{
			coverage = area / 6;
		
			if (size == 5)
				{
				bucket= ceil(coverage / size); //ceil used to round up the number
				price = bucket * 5;
				p_bucket = 5;
				p_litre = 1;
				}
		
			else if (size == 10 )
				{
				bucket = ceil(coverage / size);
				price = bucket * 8;
				p_bucket = 8;
				p_litre = 0.8;
				}
				
			
			else if (size == 25)
				{
				bucket = ceil(coverage / size);
				price = bucket * 10;
				p_bucket = 10;
				p_litre = 0.4;
				}
		
			else
				{
				cout << "Error! Invalid size" << endl; //to avoid input other than 5,10 or 25 by user
				exit(1); //terminate the program
				}
		
			break; //terminate case
		}
		
		case 'B': case 'b':
		{
			coverage = area / 5;
		
			if (size == 5)
				{
				bucket = ceil(coverage / size);
				price = bucket * 9;
				p_bucket = 9;
				p_litre = 1.8;
				}
		
			else if (size == 10 )
				{
				bucket = ceil(coverage / size);
				price = bucket * 15;
				p_bucket = 15;
				p_litre = 1.5;
				}
		
			else if (size == 25)
				{
				bucket = ceil(coverage / size);
				price = bucket * 18;
				p_bucket = 18;
				p_litre = 0.72;
				}
		
			else
				{
				cout << "Error! Invalid size" << endl;
				exit(1);
				}
				
			break;
		}
		
		case 'C': case 'c':
		{
			coverage = area / 4.5;
		
			if (size == 5)
				{
				bucket = ceil(coverage / size);
				price = bucket * 23;
				p_bucket = 23;
				p_litre = 4.6;
				}
		
			else if (size == 10 )
				{
				bucket = ceil(coverage / size);
				price = bucket * 38;
				p_bucket = 38;
				p_litre = 3.8;
				}
		
			else if (size == 25)
				{
				bucket = ceil(coverage / size);
				price = bucket * 48;
				p_bucket = 48;
				p_litre = 1.92;
				}
		
			else
				{
				cout << "Error! Invalid size" << endl;
				exit(1);
				}
		
			
		
		}
		
		default:
		{
			cout << "Error! Input is incorrect" << endl; 
  			exit(1);
 	 	}
			break;	
	}
	
	//output
	cout << "1. The number of buckets required: " << bucket << endl;
	cout << "2. Price per bucket: RM" << p_bucket << endl;
	cout << "3. Price per litre of the chosen quality: RM" << p_litre << endl;
	cout << "4. Total price: RM" << price << endl;
	
	//discount condition
		if (price > 100)
			{
			price = price * 0.95;
			cout << "5. Total price after 5% discount: RM" << price << endl;
			}
	
		else
			cout << "5. Total price after 5% discount: no discount ( total price must exceed RM100 )";
	
	return 0;
}
