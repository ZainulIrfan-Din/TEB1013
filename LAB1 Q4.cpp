#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int w1,w2,w3,w4,w5,w6,w7,total;
	float gin, nin, ca, stat, bal, ut, put, utp;
	
	std::cout << std::setprecision(2) << std::fixed;
	
	//input
	
	cout << "Please enter hours work for week 1: ";
	cin >> w1;
	
	cout << "Please enter hours work for week 2: ";
	cin >> w2;
	
	cout << "Please enter hours work for week 3: ";
	cin >> w3;
	
	cout << "Please enter hours work for week 4: ";
	cin >> w4;
	
	cout << "Please enter hours work for week 5: ";
	cin >> w5;
	
	cout << "Please enter hours work for week 6: ";
	cin >> w6;
	
	cout << "Please enter hours work for week 7: ";
	cin >> w7;
	
	//process
	
	total = w1+w2+w3+w4+w5+w6+w7;
	gin = total * 15.50;
	nin = gin * 0.86;
	ca = nin * 0.25;
	stat = nin * 0.04;
	bal = nin -(ca + stat);
	ut = bal * 0.45;
	put = ut /2 * 0.5;
	utp = bal - ut;
	
	cout << " " << endl;
	
	//output
		cout << "Income before taxes: RM" << gin << endl;
		cout << "Income after taxes: RM" << nin << endl;
		
		cout << " " << endl;
		
		cout << "Money spent for cloth and accessories: RM" << ca << endl;
		cout << "Money spent for stationary: RM" << stat << endl;
		cout << "Money invested for unit trust: RM"<< ut << endl;
		cout << "Money invested by parent for unit trust: RM" << put << endl;
		cout << "Money brought back to UTP: RM" << utp << endl;
	
	return 0;
	
}
