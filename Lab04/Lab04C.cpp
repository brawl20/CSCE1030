/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			2/1/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	This is the third of three LAB assignments.
					Gets the bonus for a employee based off salary and certain variables.

*/

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
	//Declaring variables
	char 	satPerformance;
	float 	salary;
	int 	experience;
	float	bonus;
	// Ask for and save varaibles values
	printf("Type y/Y if you have had satisfactory performance:\n");
	scanf("%c",&satPerformance);
	printf("What is your salary?\n");
	scanf("%f",&salary);
	printf("How many years of experience do you have?\n");
	scanf("%i",&experience);
	
	// Run code to calculate 
	if (satPerformance == 'y' || satPerformance == 'Y')
	{
		
		if (experience >= 10)
		{
			bonus = (salary * 0.08);
		}
		else
		{
			bonus = (salary * 0.05);
		}
		
	}
	else
	{
		if (experience >= 10)
		{
			bonus = (salary * 0.03);
		}
		else
		{
			bonus = 0;
		}	
	}

	printf("$%.2f is the bonus you would get.\n",bonus);

return 0;
}
