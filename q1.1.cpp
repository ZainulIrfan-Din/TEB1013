#include <iostream>
#include <cstring>  //used for string
#include <iomanip>  //used for setprecision

using namespace std;   //reduce the possibility of naming collisions

typedef struct
{
	char name[50];
	int vote;
	float pervote;
} candidate;

int main()
{
	candidate can[5];
				
	int max = 0;					
	float total = 0;
	string winner[5];
	
	cout << fixed <<setprecision(2);			//for output two point decimals
	
	cout << "ORAL ASSESSMENT 1.1 (ARRAY)" << endl << endl;
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter candidate " << i + 1 << " last name: ";
		cin.get(can[i].name, 20);	//for 20 box range
		
		do
		{
		cout << "Enter votes received: ";
		cin >> can[i].vote;
		
		if (can[i].vote < 0)					//if vote below 0
		{	
			cout << endl;
			cout << "Error. Vote must be zero or positive number." << endl << endl; 
			cout << "Candidate " << can[i].name << endl;
		}
		}
		while((can[i].vote) < 0 );
		
		cout << endl;
		
		cin.ignore();  //to avoid value in input to be replaced in next loop
	}
	
	system("CLS");						//clear screen
	
	for(int i = 0; i < 5; i++)				
	{
		if (max <= can[i].vote)				//to find highest vote
		{
			if(max < can[i].vote)			//highest vote for one person
			{
				max = can[i].vote;
				for(int j = 0; j < 5; j++)
					winner[j].clear();
					
					winner[0] = can[i].name;
			}
			
			else if(max == can[i].vote)				//for when there are two similar votes amount
			{
				for(int j = 0; j < 5; j++)
				{
					if (winner[j].empty())
					{
						winner[j] = can[i].name;
						break;					
					}
				}
			}
		}
		
		total = total + can[i].vote;		
	}
	
	for(int i = 0; i < 5; i++)
	{
		can[i].pervote = (can[i].vote / total) * 100;
	}
	
	cout << "ORAL ASSESSMENT 1.1 (ARRAY)" << endl << endl;
	
	cout << "Candidate\t" << " | " << "Votes Received" << " | " << " % of Total Votes" << endl;
	
	for(int i = 0; i < 5; i++)
	{
		cout << can[i].name << "\t\t | " << can[i].vote << "\t\t  | " << can[i].pervote << endl;
	}
	
	cout << fixed <<setprecision(0);					//for zero decimal points
		
	cout << "TOTAL " << "\t\t | " << total << endl << endl;
	
	max = can[0].vote;			
	int j = 0;
	for(int i = 0; i < 5; i++)
	{
		if (!winner[i].empty())					//checking if there is two winner or not
		j = j + 1;
	}
	
	cout << "The winner of the election is ";
	for(int i = 0; i < j; i++)
	{
		if(i != 0)						//if two winner, there will be "and" in the output
		{	
			cout << " and ";
		}
		cout << winner[i] << endl;
	}
	
	system("pause");
	
	return 0;
}

