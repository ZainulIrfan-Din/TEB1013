#include <iostream>
#include <iomanip>  //for setprecision two decimals

using namespace std;

void price(double&, double&);											//declare function call (byRef)
void info(bool&, bool&, bool&, int&, int&);									//void does not return value
double MembershipCost(double, int, double, int, bool, bool, bool);

void detail();				//main function call

int main()
{
    bool senior;							//declaration for true / false
    bool boughtFiveOrMoreSessions;
    bool paidTwelveOrMoreMonths;
    
    int numberOfMembershipMonths;			//declaration variables
    int numberOfPersonalTraining;						
    double regularMembersCharges;
    double cost_OneSession;

    double MemberCost;

  	 cout << fixed <<setprecision(2);					//set two decimal point in output

    detail();					//call main function

    cout << endl;				//space gap

    price(regularMembersCharges, cost_OneSession);					//calling price function

    info(senior, boughtFiveOrMoreSessions, paidTwelveOrMoreMonths, numberOfMembershipMonths, numberOfPersonalTraining);

    // calculation for info function
    MemberCost = MembershipCost(regularMembersCharges, numberOfMembershipMonths, cost_OneSession, numberOfPersonalTraining, senior, boughtFiveOrMoreSessions, paidTwelveOrMoreMonths);
	
	cout << endl;
    cout << "The total price is "<< "RM" << MemberCost << endl << endl;				//output for total price

    system("pause");					//press any key to continue for the last process before exiting program
    return 0;
}

void detail()				//in function detail (main page)
{
     cout << "ORAL ASSESSMENT 2.1 (FUNCTIONS)" << endl << endl;
    
    cout << "(a) Seniors citizens will get discount 30% of of the regular membership price." << endl;
    cout << "(b)  If membership is bought and paid for 12 or more months, the discount is 15%" << endl;
    cout << "(c) If more than five personal training sessions are bought and paid for, the discount on each session is 20%" << endl;
}

void price(double& regMemPrice, double& personalCost)			//in function price
{

    cout << "Please enter the cost of regular Membership per month: RM";
    cin >> regMemPrice;

    cout << "Please enter the cost of one personal traning session: RM";
    cin >> personalCost;

}

void info(bool& senCitizen, bool& bFiveOrMoreSess, bool& paidTwMnth, int& nOfMonths, int& nOfPersonalSess)		//in function info
{									//checking if user is a senior citizen
    char userInputSenior;					
    
    cout << endl;
    
    cout << "Are you a senior citizen? (Y/N): ";
    cin >> userInputSenior;

    if (userInputSenior == 'y' && userInputSenior == 'Y')
    {
        senCitizen = true;
    }
    else
        senCitizen = false;

    cout << endl;


    //Number of personal training session.
    cout << "Enter the number of personal training sessions bought: ";
    cin >> nOfPersonalSess;

    if (nOfPersonalSess >= 5)
    {
        bFiveOrMoreSess = true;
    }
    else
        bFiveOrMoreSess = false;

    cout << endl;


    //Number of months
    cout << "Enter the number of months you are paying for: ";
    cin >> nOfMonths;

    if (nOfMonths >= 12)
    {
        paidTwMnth = true;
    }
    else
        paidTwMnth = false;

}

	double MembershipCost(double regMemPricePerMth, int nOfMonths, double personalCost, int nOfPersonalSess, bool senCitizen, bool bFiveOrMoreSess, bool paidTwMnth)		//in function MembershipCost
{
    double finalMemberCost, finalSessCost;			//declaration final variable

    //Session Discount
    if (bFiveOrMoreSess)
    {
        personalCost = personalCost * 0.8;
    }
    else
    {
        personalCost = personalCost;
    }


    //Month Discount
    if (paidTwMnth)
    {
        regMemPricePerMth = regMemPricePerMth * 0.85;
    }
    else
    {
        regMemPricePerMth = regMemPricePerMth;
    }


    finalMemberCost = regMemPricePerMth * nOfMonths;
    finalSessCost = personalCost * nOfPersonalSess;

    // Check if Senior Citizen Discount Applies
    if (senCitizen) {
        return (finalMemberCost * 0.7) + finalSessCost ;			//return for non-void function
    }
    else {
        return finalMemberCost + finalSessCost;
    }

}
