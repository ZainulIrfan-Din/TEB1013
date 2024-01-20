#include <iostream>
#include <iomanip> //for two points decimal round up (std:setprecision)

using namespace std;

int main ()

{	//declaration
	float loan, interest, monthly, m_interest, principal;
	int n_month = 0; //initial value is zero
	
	std::cout << std::setprecision(2) << std::fixed; //round up to two decimals
	
	//question
	cout << "QUESTION 2.1\n\nA local bank wants to design a software for loan management for their customers. When a customer borrow money from bank to buy a house, a car, or to start a new business. The loan is returned by making periodic payments over a certain period.The bank charges interest on the loan. Every periodic payment consists of the interest on the loan and the payment toward the basic loan amount. Suppose that you borrow RM 1000 at the interest rate of 7.2% per year and the payments are monthly. Suppose that the monthly payment is RM 25. The interest is 7.2% per year and the payments are monthly, so the interest rate per month is 7.2 / 12 = 0.6%. The first month’s interest on RM 1000 is 1000 x 0.006 = 6. Because the payment is RM25 and interest for the first month is RM6, the payment toward the principal amount is 25 – 6 = 19. This means after making the first payment, the loan amount is 1000 – 19 = 981. For the second payment, the interest is calculated on RM981. So, the interest for the second month is 981 x 0.006 = 5.886, that is, approximately RM 5.89. This implies that the payment toward the principal is 25 – 5.89 = 19.11 and the remaining balance after the second payment is 981 – 19.11 = 961.89. This process is repeated until the loan is paid.\n\nWrite a program that accepts as input the loan amount, the interest rate per year, and the monthly payment. (Enter the interest rate as a percentage. For example, if the interest rate is 7.2% per year, then enter 7.2). The program then outputs the number of months it would take to repay the loan. (Note that if the monthly payment is less than the first month’s interest, then after each payment, the loan amount will increase. In this case, the program must warn the borrower that the monthly payment is too low, and with this monthly payment, the loan amount could not be repaid). \n\n";
	
	//code
	cout << "ANSWER" << endl << endl; 
	
	do //avoid negative input
	{
	cout << "Loan amount: RM"; //input
	cin >> loan;
	
		if (loan <= 0) //avoid -ve input
			{
				cout << endl;  //gap between lines
				cout << "Error! Input must be more than 0" << endl; 
				cout << endl;
			}
	}
	while (loan <= 0);
	
	do
	{
	cout << "Interest rate per year (%): ";
	cin >> interest;
	
		if (interest < 0)
			{
				cout << endl;
				cout << "Error! Input must be 0 or more" << endl; 
				cout << endl;
			}
	}
	while (interest < 0);
	
	do
	{
	cout << "Monthly payment: RM";
	cin >> monthly;
	
		if (monthly <= 0)
			{
				cout << endl;
				cout << "Error! Input must be more than 0" << endl; 
				cout << endl;
			}
	}
	while (monthly <= 0);
	
	//loop (monthly) and process
	do
	{
		m_interest = loan * ((interest / 12) / 100);
		principal = monthly - m_interest;
	
		n_month = n_month + 1; //act as counter as well
	
			if( (loan - principal) < 0 )  //To avoid negative value
				{
								
				cout << endl; //gap between lines
		
				cout << "Remaining loan amount: RM" << loan << endl;
				cout << n_month << ". Monthly interest: " << m_interest << endl;
				}	
	
			else 
				{
				loan = loan - principal;
				
					if (monthly < m_interest)
					{
					cout << endl;
					
					cout << "Monthly payment is too low" << endl;
					exit(1); //terminate program to avoid infinite loop
					}
		
					else
					{
					cout << endl;
			
					cout << "Remaining loan amount: RM" << loan << endl;
					cout << n_month << ". Monthly interest: " << m_interest << endl;
					}
				}
	
	}
	while (loan > 0);
	
	cout << endl;
	
	//output
	cout << "Length of repayment plan (months): " << n_month;
	
	return 0;
}	

