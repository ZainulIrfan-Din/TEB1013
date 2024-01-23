#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{  ifstream infile;
   double total;
   int input,i=0,child,adult,destination;
   
   infile.open("data.txt");
   
	infile>>input;

	while(i<input)
	{
	infile>>destination;
	infile>>adult;
	infile>>child;

	if(destination==1)
	{
		total=(500*adult)+(child*375);

		if((adult+child)>10)
		{
			total=total*0.9;
		}
	}
	
	if(destination==2)
	{
		total=(700*adult)+(child*525);

		if((adult+child)>10)
		{
			total=total*0.9;
		}
	}
	
	if(destination==3)
	{
		total=(450*adult)+(child*337.5);

		if((adult+child)>10)
		{
			total=total*0.9;
		}
	}
	
	cout<<"The total price is : RM "<<fixed<<setprecision(2)<<total<<endl;
	i++;
	}
	
infile.close();

return 0;
}
