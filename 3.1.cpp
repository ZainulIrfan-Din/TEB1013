#include <iostream>
#include <fstream>			//for file

using namespace std;


int main()
{	
	int assign, cars, high, win;					//declaration 
	int total = 0;
	
	cout << "ORAL ASSESSMENT 3.1 (FILE)" << endl << endl;
	
	fstream oufile("carsales.txt", ios::in | ios::out | ios::app); //open file for member to write 	//for adding value to file, not replacing value (append)
	
		if(!oufile.is_open())
			{
				cout << "File Error" << endl; 	//for error when opening file
			}
		else
			{	
				cout << "File Opened" << endl << endl;
				
				int max = 0;
											
				for(int i = 0; i < 10; i++)
				{	
					cout << "Assigned Number: ";
					cin >> assign;
													
					cout << "Cars sold: ";
					cin >> cars;
					
					total = total + cars;
					
					
					
					if (cars > max)						//checking most cars sold
					{	
						max = cars;
						win = assign;
					}
				
					cout << endl;
					
					
					oufile << assign << " " << cars << endl;					
				}
					oufile << endl;
					oufile << total << endl << endl;
					oufile << win << " " << max << endl << endl;
			}
		
			
	system("CLS");
	
	cout << "ORAL ASSESSMENT 3.1 (FILE)" << endl << endl;
	
	ifstream infile("carsales.txt"); //open file for read only
	
	cout << "Salesperson" << "\t | " << "Cars Sold" << endl;
	
	for (int i = 0; i < 10; i++)
	{	
		infile >> assign >> cars;
		
		cout << assign << "\t\t | " << cars << endl;
	}
	
	
	cout << endl;
	
	cout << "Total cars sold: " << total << endl;
	cout << "Salesperson who sold the most car is " << win << endl;
	
	cout << endl;
	
	infile.close();				//closing the file
	
	system("pause");

	return 0;
}

