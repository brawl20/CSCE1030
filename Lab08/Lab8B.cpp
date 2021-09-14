/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			3/19/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	Second of 3 lab assignments.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <iomanip> 

using namespace std;

double compute_bonus(double const base_salary, int const experience);

int main()
{
	double base_salary;
	int experience;
	//Get the values of base_salary
	//and experience from the user
	cout << "How much do you make a year:";
	cin >> base_salary;
	cout << "How many years have you been working your current job:";
	cin >> experience;
	//Call compute_bonus by passing neccesary parameters
	//Display the bonus returned by the function
	cout << fixed << setprecision(2) << compute_bonus(base_salary, experience) << endl;
	return 0;
}

//Function defenition
/*
Function:	Calculate bonuses
Parameters: A double representing base salary
			An int representing years of experience
Return:		A double representing the bonus amount
Description:This function calculates a a bonus based off base salary and years worked and returns the amount.
*/
double compute_bonus(double const base_salary, int const experience)
{
	double bonus = 0;
	double bonusRate = 0;
	if(experience > 10)
	{
		bonusRate = .05;
	}
	else
	{
		bonusRate = .025;
	}
	
	bonus = (base_salary * bonusRate);
	
	return(bonus);
	
}