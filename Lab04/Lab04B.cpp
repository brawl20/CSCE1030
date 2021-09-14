/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			2/1/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	This is the second of three LAB assignments.

*/

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
	// Variable initialization/decleration.
	int x;
	int randomNum;
	
	cout << "Enter a value for x between 100 and 200:";
	// ask for random number
	cin >> x;
	
	if (x >= 100 && x <= 200)
	{
		// make a random number between 100-200.
		srand(time(NULL));
		randomNum = (rand() % 100) + 100;
		cout << "Here is a random number: " << randomNum << endl;
	}
	else
	{
		cout << "Your value " << x << " is invalid." << endl;
	}
	if (randomNum < x)
	{
		cout << "The random number is less than your number." << endl;
	}
	else
	{
		cout << "The random number is not less than your number." << endl;
	}
	return 0;
}
