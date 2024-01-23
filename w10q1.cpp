//C++ program to write and read text in/from file.
#include <iostream>
#include <fstream>
#include <iomanip>
#include<vector>
 
using namespace std;
 
int main()
{
    vector<double>sum;
    double amt, total;
	double assist, payment; 
	double count = 0;
	char ans;

   ifstream file1;
   ofstream file2;
   
   file1.open("input.txt");
   
   while(file1>>amt>>payment>>assist)
	{
    total = 0;

	if (assist == 0)
 		total = amt;
 		
	else
		{
    	if (amt < 50)
            total = amt + 0.50;
        else
            total = amt;
 		}
 		 
	if (payment == 1)
   		total = total +( 0.05 * total);	
           
	else 
   		total= total;

	sum.push_back(total);

	cout << endl;
	}

   fstream file; //object of fstream class
    
   //opening file "sample.txt" in out(write) mode
   file2.open("sample.txt", ios::out);
   
   cout << "File created successfully." << endl;
  
    //write text into file
   for(int i = 0 ; i < 5; i++)
   {
   	file2 << sum[i] << endl;
	}
   
   //closing the file
   file2.close();
    
   
	system("pause");
   return 0;
}
