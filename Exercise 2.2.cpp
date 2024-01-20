#include <iostream>

using namespace std;

int main ()
{	//declaration
	float prime, fibonacci, factorial;
	char character;
	unsigned long long range, j, min, max, next, first, second, num, fact, i; //larger range than int
	
	//initial value
	first = 0;
	second = 1;
	fact = 1;
	
	//question
	cout << "QUESTION 2.2\nPrompt user with the list of above details with corresponding character. Also ask user about the limit / range / number as per the requirement of the specific operation. For example, after printing above information on screen if a user enters 'P' that means he / she wants to print series of prime number, the next step is to prompt user for range input for prime number series e.g. 0 to 100. Than finally the series according to user input must be printed on screen.\n\n" ;
	
	//option
	cout << "	To be printed" << "			Character Input" << endl;
	cout << "1" << "	Series of Prime Number" << "			P" << endl;
	cout << "2" << "	Series of Fibonacci Number" << "		S" << endl;
	cout << "3" << "	Factorial of given number" << "		F" << endl;
	
	
	//input
	cout << endl << "Character input: ";
	cin >> character;
	
	//case and process then output
		switch (character)
		{
			case 'P': case 'p':
			
				cout << "Range of input: ";
				cin >> num;
				cout << "Min: ";
				cin >> min;
				cout << "Max: ";
				cin >> max;
			
				cout << endl; //gap between lines
				
				cout << "The prime numbers are: " << endl; //number that is divisible only by itself and 1 
			
				for (i = min; i < max; i++ ) //to make sure the number is in range
				{
					for (j = 2; j <= i; j++)	//j is use to check whether i is divisable by j or not
					{
						if ( i % j == 0 ) //checking the remainder. If that the case then i is divisable by j
							{
							break; //when the factor for i is found, the inner for loop j will be terminated
							}
					}
			
					if ( i == j )
						{
						cout << i << " ";
						}
				}
				
				break;
			
			case 'S': case 's':
			
				cout << "Range of input: ";
				cin >> num;
			
				cout << endl;
			
				cout << "The series of Fibonacci series are: " << endl; //the sum of two preceding numbers
			
				for (i = 0; i < num; i++)
					{
					cout << first << " ";
						
					next = first + second;
					first = second;
					second = next;
					}
			
				break;
			
			case 'F': case 'f':
			
				cout << "Range of input: ";
				cin >> num;
			
				cout << endl;
				
				cout << "The factorial of given number is: " << endl; //the product of preceding numbers from 1 to num
			
				for(i = 1; i <= num; i++)
					{
					fact = fact * i;
					cout << fact << " ";	
					}
			
				break;
		
			default:
				cout << endl;
				
				cout << "Error! Invalid input" << endl; //for invalid input
				break;	
		}
	
	return 0;
}
